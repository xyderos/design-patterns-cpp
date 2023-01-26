CXX := $(shell which g++)

# just a clean way to distinguish the two deployment environments
DEVELOPMENT_FLAGS := -g -Wall -Weffc++ -pedantic \
    -pedantic-errors -Wextra  -Wall -Wcast-align \
    -Wcast-qual -Wchar-subscripts -Wcomment -Wconversion \
    -Wdisabled-optimization \
    -Werror -Wfloat-equal -Wformat -Wformat=2 \
    -Wformat-nonliteral -Wformat-security \
    -Wformat-y2k \
    -Wimport -Winit-self -Winline \
    -Winvalid-pch \
    -Wunsafe-loop-optimizations -Wlong-long -Wmissing-braces \
    -Wmissing-field-initializers -Wmissing-format-attribute \
    -Wmissing-include-dirs -Wmissing-noreturn \
    -Wpacked -Wparentheses -Wpointer-arith \
    -Wredundant-decls -Wreturn-type \
    -Wsequence-point -Wshadow -Wsign-compare -Wstack-protector \
    -Wstrict-aliasing -Wstrict-aliasing=2 -Wswitch -Wswitch-default \
    -Wswitch-enum -Wtrigraphs -Wuninitialized \
    -Wunknown-pragmas -Wunreachable-code -Wunused \
    -Wunused-function -Wunused-label -Wunused-parameter \
    -Wunused-value -Wunused-variable -Wvariadic-macros \
    -Wvolatile-register-var -Wwrite-strings -fPIC
PRODUCTION_FLAGS := -O3 -fPIC

ifeq "$(DEPLOYMENT)" "production"
    CXXFLAGS= $(PRODUCTION_FLAGS)
else
    CXXFLAGS:= $(DEVELOPMENT_FLAGS)
endif

# language specific
SOURCE_FILES_SUFFIX := .cpp
HEADER_SUFFIX := .h

# source
LIB := libmod.so
LIBRARY_SOURCE_DIRECTORY := src
LIBRARY_OBJECTS_DIRECTORY := temp_obj_directory
LIBRARY_OBJECTS :=$(addprefix $(LIBRARY_OBJECTS_DIRECTORY)/, apple.o orange.o apple_generator.o orange_generator.o fruit.o factory.o)
SHARED := -shared

# tests
TEST := executable
TESTS_SOURCE_DIRECTORY:= tests
TESTS_DIRECTORY_OBJECTS := temp_test_obj_directory
TOBJS :=$(addprefix $(TESTS_DIRECTORY_OBJECTS)/, test_factory.o driver.o)
LIBS := -lcppunit -lm $(LIB)

# build the library
build: clean $(LIB)

# compile everything needed for the library
$(LIB): lib_obj_dirs $(LIBRARY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(SHARED) $(LIBRARY_OBJECTS) -o $(LIB)

# compile command for each source file
$(LIBRARY_OBJECTS_DIRECTORY)/%.o: $(LIBRARY_SOURCE_DIRECTORY)/%$(SOURCE_FILES_SUFFIX) $(LIBRARY_SOURCE_DIRECTORY)/%$(HEADER_SUFFIX)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# make temporary directory for the library objects
lib_obj_dirs:
	mkdir -p $(LIBRARY_OBJECTS_DIRECTORY)

# build the tests
test: clean $(LIB) $(TEST)

# build an executable that tests the library
$(TEST): test_lib_dirs $(TOBJS)
	$(CXX) $(CXXFLAGS) $(TOBJS) -o $(TEST) -L. $(LIBS) 

# compile command for each test file
$(TESTS_DIRECTORY_OBJECTS)/%.o: $(TESTS_SOURCE_DIRECTORY)/%$(SOURCE_FILES_SUFFIX) $(TESTS_SOURCE_DIRECTORY)/%$(HEADER_SUFFIX)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# make temporary directory for the test objects
test_lib_dirs:
	mkdir -p $(TESTS_DIRECTORY_OBJECTS);

clean:
	rm -f *~ *.o $(LIB) $(TEST)
	rm -rf $(LIBRARY_OBJECTS_DIRECTORY) $(TESTS_DIRECTORY_OBJECTS)