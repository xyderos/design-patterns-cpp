#include "../src/addition.h"
#include "test_addition.h"

void
TestAddition::testAddition(void)
{
	CPPUNIT_ASSERT_EQUAL(2, add(1, 1));
}