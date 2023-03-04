#include <cppunit/extensions/HelperMacros.h>

class test_decorators : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_decorators);
	CPPUNIT_TEST(decorator_should_decorate_a_component);
	CPPUNIT_TEST(decorator_should_decorate_both_components);
	CPPUNIT_TEST(decorator_should_decorate_another_decorator);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void decorator_should_decorate_a_component();
	void decorator_should_decorate_both_components();
	void decorator_should_decorate_another_decorator();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_decorators);
