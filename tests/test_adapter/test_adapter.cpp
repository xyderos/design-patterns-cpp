#include "../../src/adapter/adapter.h"
#include "../../src/adapter/not_adapted.h"
#include "../../src/adapter/target.h"
#include "test_adapter.h"

#include <iostream>

void
test_adapter::test_adapter_should_adapt_non_adaptable_object_to_the_target()
{
	std::string expected_from_target = "hi!";
	auto *t = new target;

	CPPUNIT_ASSERT_EQUAL(expected_from_target, t->message());

	std::string expected_from_not_adapted = "hello!";
	auto *na = new not_adapted;

	CPPUNIT_ASSERT_EQUAL(expected_from_not_adapted, na->message());

	std::string expected_from_adapter = "waddup means : hello!";
	auto *adapt = new adapter(na);

	CPPUNIT_ASSERT_EQUAL(expected_from_adapter, adapt->message());

	delete adapt;
	delete na;
	delete t;
}
