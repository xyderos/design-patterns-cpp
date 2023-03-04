#include <cppunit/TestAssert.h>

#include "../../src/iterator/container.h"
#include "../../src/iterator/data.h"
#include "../../src/iterator/iterator.h"
#include "test_container_complex.h"

#include <algorithm>

#define MAX 10
void
test_container_complex::test_container_adding_complex_items_should_be_okay()
{
	container<data> c;

	for (int i = 0; i < MAX; i++) {
		c.add(data(i));
	}

	auto *it = c.make_iterator();

	auto counter = 0;

	for (it->first(); !it->end(); it->next()) {
		counter++;
	}

	CPPUNIT_ASSERT_EQUAL(counter, MAX);

	delete it;
}
