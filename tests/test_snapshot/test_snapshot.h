#include <cppunit/extensions/HelperMacros.h>

class test_snapshot : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_snapshot);
	CPPUNIT_TEST(test_snapshot_should_create_a_new_state);
	CPPUNIT_TEST(test_snapshot_should_add_new_state_upon_business_logic);
	CPPUNIT_TEST(test_snapshot_should_be_able_to_restore_the_state);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_snapshot_should_create_a_new_state(void);
	void test_snapshot_should_add_new_state_upon_business_logic(void);
	void test_snapshot_should_be_able_to_restore_the_state(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_snapshot);