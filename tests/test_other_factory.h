#include <cppunit/extensions/HelperMacros.h>

class test_other_factory : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_other_factory);
	CPPUNIT_TEST(test_other_factory_should_build_the_correct_objects);
	CPPUNIT_TEST(test_other_factory_should_inject_the_correct_objects_in_construction);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_other_factory_should_build_the_correct_objects(void);
	void test_other_factory_should_inject_the_correct_objects_in_construction(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_other_factory);