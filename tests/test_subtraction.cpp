#include "../src/subtraction.h"
#include "test_subtraction.h"

void
TestSubtration::testSubtration(void)
{
	CPPUNIT_ASSERT_EQUAL(1, subtract(2, 1));
}