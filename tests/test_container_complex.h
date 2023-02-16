#include <cppunit/extensions/HelperMacros.h>

class test_container_complex : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_container_complex);
	CPPUNIT_TEST(test_container_adding_complex_items_should_be_okay);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_container_adding_complex_items_should_be_okay(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_container_complex);
