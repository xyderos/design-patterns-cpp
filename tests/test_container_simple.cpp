#include <cppunit/TestAssert.h>

#include "../src/container.h"
#include "../src/iterator.h"
#include "test_container_simple.h"

#include <algorithm>

#define MAX 10

void
test_container_simple::test_container_adding_simple_items_should_be_okay()
{
	container<int> c;

	for (int i = 0; i < MAX; i++) {
		c.add(i);
	}

	auto *it = c.make_iterator();

	auto counter = 0;

	for (it->first(); !it->end(); it->next()) {
		counter++;
	}

	CPPUNIT_ASSERT_EQUAL(counter, MAX);
}