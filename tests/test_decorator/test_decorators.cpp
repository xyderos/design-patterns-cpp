#include "../../src/decorator/component.h"
#include "../../src/decorator/concrete.h"
#include "../../src/decorator/either_decorator.h"
#include "../../src/decorator/other_decorator.h"
#include "test_decorators.h"

void
test_decorators::decorator_should_decorate_a_component()
{
	decorator_component *simple = new concrete;

	std::string expected("concrete");

	CPPUNIT_ASSERT_EQUAL(expected, simple->message());

	delete simple;
}

void
test_decorators::decorator_should_decorate_both_components()
{
	decorator_component *simple = new concrete;

	decorator_component *either = new either_decorator(simple);
	std::string expected_from_either("either x concrete");

	CPPUNIT_ASSERT_EQUAL(expected_from_either, either->message());

	decorator_component *other = new other_decorator(simple);
	std::string expected_from_other("other x concrete");

	CPPUNIT_ASSERT_EQUAL(expected_from_other, other->message());

	delete simple;
	delete either;
	delete other;
}

void
test_decorators::decorator_should_decorate_another_decorator()
{
	decorator_component *simple = new concrete;

	decorator_component *either = new either_decorator(simple);
	decorator_component *other = new other_decorator(either);
	std::string expected("other x either x concrete");

	CPPUNIT_ASSERT_EQUAL(expected, other->message());

	delete simple;
	delete either;
	delete other;
}
