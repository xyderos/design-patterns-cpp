#include "../src/allocator.h"
#include "../src/facade.h"
#include "../src/scheduler.h"
#include "test_facade.h"

void
test_facade::test_facade_should_initialise_everything_accoring_to_priority()
{
	auto *sched = new scheduler;
	auto *al = new allocator;

	auto *f = new facade(al, sched);

	std::string expected("alloc_beforesched_beforealloc_aftersched_after");

	CPPUNIT_ASSERT_EQUAL(expected, f->initialization());

	delete f;
}
