#include <cppunit/extensions/HelperMacros.h>

class test_strategy : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_strategy);
	CPPUNIT_TEST(test_strategy_of_a_strategy_should_be_okay);
	CPPUNIT_TEST(
	    test_strategy_of_a_strategy_with_changing_strategy_should_be_okay);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_strategy_of_a_strategy_should_be_okay();
	void
	test_strategy_of_a_strategy_with_changing_strategy_should_be_okay();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_strategy);
