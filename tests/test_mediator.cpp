#include <cppunit/TestAssert.h>

#include "../src/coordinator.h"
#include "test_mediator.h"

void
test_mediator::test_mediator_should_trigger_correct_events_for_either_component(
    void)
{
	auto *c1 = new either_compoment;
	auto *c2 = new other_compoment;
	auto *c = new coordinator(c1, c2);

	c1->bl1();
	notification_t expected = notification_t::BUSINESS_LOGIC_3;
	notification_t result = c->get_latest_notification();
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete c2;
	delete c1;
	delete c;
}

void
test_mediator::test_mediator_should_trigger_correct_events_for_other_component(
    void)
{
	auto *c1 = new either_compoment;
	auto *c2 = new other_compoment;
	auto *c = new coordinator(c1, c2);

	c1->bl2();
	notification_t expected = notification_t::BUSINESS_LOGIC_4;
	notification_t result = c->get_latest_notification();
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete c2;
	delete c1;
	delete c;
}