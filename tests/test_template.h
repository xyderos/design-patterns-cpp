#include <cppunit/extensions/HelperMacros.h>

class test_template : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_template);
	CPPUNIT_TEST(
	    test_template_with_an_implementation_should_produce_the_correct_result);
	CPPUNIT_TEST(
	    test_template_with_another_implementation_should_produce_the_correct_result);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void
	test_template_with_an_implementation_should_produce_the_correct_result(
	    void);
	void
	test_template_with_another_implementation_should_produce_the_correct_result(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_template);
