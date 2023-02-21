#include <cppunit/TestAssert.h>

#include "../src/observe.h"
#include "../src/observer.h"
#include "../src/sub.h"
#include "../src/subject.h"
#include "test_observer.h"

void
test_observer::test_observer_should_send_update()
{
	auto *s = new sub;
	auto *o = new observe(*s);

	s->make_message(notification_t::MESSAGE_2);

	CPPUNIT_ASSERT_EQUAL(notification_t::MESSAGE_2,
	    o->get_latest_notification());

	delete s;
	delete o;
}

void
test_observer::test_observer_should_send_update_to_all_observers()
{
	auto *s = new sub;
	auto *o = new observe(*s);
	auto *o1 = new observe(*s);

	s->make_message(notification_t::MESSAGE_2);

	CPPUNIT_ASSERT_EQUAL(notification_t::MESSAGE_2,
	    o->get_latest_notification());
	CPPUNIT_ASSERT_EQUAL(notification_t::MESSAGE_2,
	    o1->get_latest_notification());

	delete s;
	delete o;
	delete o1;
}

void
test_observer::
    test_observer_should_keep_previous_notification_when_we_detached_an_observer()
{
	auto *s = new sub;
	auto *o = new observe(*s);
	auto *o1 = new observe(*s);

	s->make_message(notification_t::MESSAGE_2);
	s->make_message(notification_t::MESSAGE_1);

	o->detach_from_list();

	s->make_message(notification_t::MESSAGE_3);

	CPPUNIT_ASSERT_EQUAL(notification_t::MESSAGE_1,
	    o->get_latest_notification());
	CPPUNIT_ASSERT_EQUAL(notification_t::MESSAGE_3,
	    o1->get_latest_notification());

	delete s;
	delete o;
	delete o1;
}
