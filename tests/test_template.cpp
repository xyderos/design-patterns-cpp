#include "../src/an_implementation.h"
#include "../src/another_implementation.h"
#include "test_template.h"

void
test_template::
    test_template_with_an_implementation_should_produce_the_correct_result()
{
	auto *an_impl = new an_implementation;

	an_impl->process();

	auto result = an_impl->get_result();

	// 3 basic ops + 1 from something required
	auto expected = 4;

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete an_impl;
}

void
test_template::
    test_template_with_another_implementation_should_produce_the_correct_result()
{
	auto *another_impl = new another_implementation;

	another_impl->process();

	auto result = another_impl->get_result();

	// 4 from previous + 3 basic ops + 1 from something required + 1 from
	// hook
	auto expected = 9;

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete another_impl;
}
