#include <cppunit/extensions/HelperMacros.h>

class test_simple_component : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_simple_component);
	CPPUNIT_TEST(test_simple_component_should_return_a_leaf);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_simple_component_should_return_a_leaf();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_simple_component);
