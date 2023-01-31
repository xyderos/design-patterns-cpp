#include <cppunit/extensions/HelperMacros.h>

class test_adapter : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_adapter);
	CPPUNIT_TEST(
	    test_adapter_should_adapt_non_adaptable_object_to_the_target);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_adapter_should_adapt_non_adaptable_object_to_the_target(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_adapter);