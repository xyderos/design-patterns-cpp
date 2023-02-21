#include <cppunit/extensions/HelperMacros.h>

class test_visitor : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_visitor);
	CPPUNIT_TEST(test_visitor_case_one);
	CPPUNIT_TEST(test_visitor_case_two);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_visitor_case_one();
	void test_visitor_case_two();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_visitor);
