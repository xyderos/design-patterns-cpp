#include <cppunit/TestAssert.h>

#include "../src/a_component.h"
#include "../src/a_visitor.h"
#include "../src/another_component.h"
#include "../src/another_visitor.h"
#include "../src/component.h"
#include "test_visitor.h"

#include <algorithm>

void
test_visitor::test_visitor_case_one(void)
{
	auto a_c = new a_component;
	auto an_c = new another_component;
	auto *a_v = new a_visitor;

	a_c->accept(a_v);

	auto result = a_v->get_notification();

	CPPUNIT_ASSERT_EQUAL(notification_t::A_COMPONENT, result);

	delete a_c;
	delete an_c;
	delete a_v;
}

void
test_visitor::test_visitor_case_two(void)
{
	auto a_c = new a_component;
	auto an_c = new another_component;
	auto *a_v = new a_visitor;

	an_c->accept(a_v);

	auto result = a_v->get_notification();

	CPPUNIT_ASSERT_EQUAL(notification_t::ANOTHER_COMPONENT, result);

	delete a_c;
	delete an_c;
	delete a_v;
}
