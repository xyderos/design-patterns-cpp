#include <cppunit/extensions/HelperMacros.h>

class test_factory : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_factory);
	CPPUNIT_TEST(test_factory_with_orange_input_should_generate_an_orange);
	CPPUNIT_TEST(test_factory_with_apple_input_should_generate_an_apple);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_factory_with_orange_input_should_generate_an_orange(void);
	void test_factory_with_apple_input_should_generate_an_apple(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_factory);