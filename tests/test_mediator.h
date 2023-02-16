#include <cppunit/extensions/HelperMacros.h>

class test_mediator : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_mediator);
	CPPUNIT_TEST(
	    test_mediator_should_trigger_correct_events_for_either_component);
	CPPUNIT_TEST(
	    test_mediator_should_trigger_correct_events_for_other_component);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_mediator_should_trigger_correct_events_for_either_component(
	    void);
	void test_mediator_should_trigger_correct_events_for_other_component(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_mediator);
