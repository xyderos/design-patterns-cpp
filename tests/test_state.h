#include <cppunit/extensions/HelperMacros.h>

class test_state : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_state);
	CPPUNIT_TEST(
	    test_state_should_change_states_from_an_action_for_a_state);
	CPPUNIT_TEST(
	    test_state_should_change_states_from_another_action_for_a_state);
	CPPUNIT_TEST(
	    test_state_should_change_states_from_an_action_for_another_state);
	CPPUNIT_TEST(
	    test_state_should_change_states_from_another_action_for_another_state);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_state_should_change_states_from_an_action_for_a_state(void);
	void test_state_should_change_states_from_another_action_for_a_state(
	    void);
	void test_state_should_change_states_from_an_action_for_another_state(
	    void);
	void
	test_state_should_change_states_from_another_action_for_another_state(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_state);
