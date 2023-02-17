#include <cppunit/extensions/HelperMacros.h>

class test_observer : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_observer);
	CPPUNIT_TEST(test_observer_should_send_update);
	CPPUNIT_TEST(test_observer_should_send_update_to_all_observers);
	CPPUNIT_TEST(
	    test_observer_should_keep_previous_notification_when_we_detached_an_observer);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_observer_should_send_update(void);
	void test_observer_should_send_update_to_all_observers(void);
	void
	test_observer_should_keep_previous_notification_when_we_detached_an_observer(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_observer);
