#include <cppunit/extensions/HelperMacros.h>

class test_flyweight : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_flyweight);
	CPPUNIT_TEST(test_flyweight_should_add_if_element_is_not_present);
	CPPUNIT_TEST(test_flyweight_should_return_correct_element);
	CPPUNIT_TEST(test_flyweight_should_keep_consistent_shared_state);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_flyweight_should_add_if_element_is_not_present();
	void test_flyweight_should_return_correct_element();
	void test_flyweight_should_keep_consistent_shared_state();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_flyweight);
