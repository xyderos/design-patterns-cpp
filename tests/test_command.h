#include <cppunit/extensions/HelperMacros.h>

class test_command : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_command);
	CPPUNIT_TEST(
	    test_command_calling_with_simple_command_should_return_correct_values);
	CPPUNIT_TEST(
	    test_command_calling_with_complex_command_should_return_correct_values);
	CPPUNIT_TEST(
	    test_command_calling_with_simple_and_complex_commands_should_return_correct_values);
	CPPUNIT_TEST(
	    test_command_calling_with_no_command_handlers_should_return_empty_value);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void
	test_command_calling_with_simple_command_should_return_correct_values(
	    void);
	void
	test_command_calling_with_complex_command_should_return_correct_values(
	    void);
	void
	test_command_calling_with_simple_and_complex_commands_should_return_correct_values(
	    void);
	void
	test_command_calling_with_no_command_handlers_should_return_empty_value(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_command);