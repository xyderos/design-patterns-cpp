#include <cppunit/TestAssert.h>

#include "../../src/snapshot/caretaker.h"
#include "../../src/snapshot/originator.h"
#include "../../src/snapshot/snapshot.h"
#include "test_snapshot.h"

void
test_snapshot::test_snapshot_should_create_a_new_state(void)
{
	std::string state("guinga");
	auto *o = new originator(state);
	auto *c = new caretaker(o);
	c->backup();

	CPPUNIT_ASSERT_EQUAL(1, (int)c->history().size());

	delete o;
	delete c;
}

void
test_snapshot::test_snapshot_should_add_new_state_upon_business_logic(void)
{
	std::string state("guinga");
	auto *o = new originator(state);
	auto *c = new caretaker(o);
	c->backup();
	o->business_logic_that_changes_the_state();
	c->backup();

	CPPUNIT_ASSERT_EQUAL(2, (int)c->history().size());

	delete o;
	delete c;
}

void
test_snapshot::test_snapshot_should_be_able_to_restore_the_state(void)
{
	std::string state("guinga");
	auto *o = new originator(state);
	auto *c = new caretaker(o);
	c->backup();
	o->business_logic_that_changes_the_state();
	c->backup();
	c->undo();

	CPPUNIT_ASSERT_EQUAL(1, (int)c->history().size());

	delete o;
	delete c;
}
