#include <cppunit/TestAssert.h>

#include "../src/a_state.h"
#include "../src/another_state.h"
#include "../src/context.h"
#include "../src/state.h"
#include "test_state.h"

void
test_state::test_state_should_change_states_from_an_action_for_a_state()
{
	auto *c = new context(new a_state);

	c->perform_an_action();

	CPPUNIT_ASSERT_EQUAL(state_machine_t::ANOTHER_STATE,
	    c->get_current_state());

	delete c;
}

void
test_state::test_state_should_change_states_from_another_action_for_a_state()
{
	auto *c = new context(new a_state);

	c->perform_another_action();

	CPPUNIT_ASSERT_EQUAL(state_machine_t::NO_STATE, c->get_current_state());

	delete c;
}

void
test_state::test_state_should_change_states_from_an_action_for_another_state()
{
	auto *c = new context(new another_state);

	c->perform_an_action();

	CPPUNIT_ASSERT_EQUAL(state_machine_t::NO_STATE, c->get_current_state());

	delete c;
}

void
test_state::
    test_state_should_change_states_from_another_action_for_another_state()
{
	auto *c = new context(new another_state);

	c->perform_another_action();

	CPPUNIT_ASSERT_EQUAL(state_machine_t::A_STATE, c->get_current_state());

	delete c;
}
