#include <cppunit/extensions/HelperMacros.h>

#include "../../src/abstract_factory/either_factory.h"
#include "../../src/abstract_factory/saab.h"
#include "test_either_factory.h"

void
test_either_factory::test_either_factory_should_build_the_correct_objects()
{
	either_factory *ef = new either_factory();
	const car *s = ef->make_car();
	const truck *t = ef->make_truck();

	const std::string expected_car = "saab";
	const std::string expected_truck = "scania";

	CPPUNIT_ASSERT_EQUAL(expected_car, s->to_string());
	CPPUNIT_ASSERT_EQUAL(expected_truck, t->to_string());

	delete t;
	delete s;
	delete ef;
}

void
test_either_factory::
    test_either_factory_should_inject_the_correct_objects_in_construction()
{
	either_factory *ef = new either_factory();
	const car *s = ef->make_car();
	const truck *t = ef->make_truck();

	const std::string expected_combination = "scania x saab";

	CPPUNIT_ASSERT_EQUAL(expected_combination, t->what_am_I_carrying(*s));

	delete t;
	delete s;
	delete ef;
}