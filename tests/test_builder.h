#include <cppunit/extensions/HelperMacros.h>

class test_builder : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_builder);
	CPPUNIT_TEST(test_builder_should_produce_ancient_car);
	CPPUNIT_TEST(test_builder_should_produce_modern_car);
	CPPUNIT_TEST(test_builder_should_produce_custom_car);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_builder_should_produce_ancient_car(void);
	void test_builder_should_produce_modern_car(void);
	void test_builder_should_produce_custom_car(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_builder);