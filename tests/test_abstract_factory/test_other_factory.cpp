#include "../../src/abstract_factory/other_factory.h"
#include "test_other_factory.h"

void
test_other_factory::test_other_factory_should_build_the_correct_objects()
{
	other_factory *of = new other_factory();
	const car *s = of->make_car();
	const truck *t = of->make_truck();

	const std::string expected_car = "volvo";
	const std::string expected_truck = "man";

	CPPUNIT_ASSERT_EQUAL(expected_car, s->to_string());
	CPPUNIT_ASSERT_EQUAL(expected_truck, t->to_string());

	delete t;
	delete s;
	delete of;
}

void
test_other_factory::
    test_other_factory_should_inject_the_correct_objects_in_construction()
{
	other_factory *of = new other_factory();
	const car *s = of->make_car();
	const truck *t = of->make_truck();

	const std::string expected_combination = "man x volvo";

	CPPUNIT_ASSERT_EQUAL(expected_combination, t->what_am_I_carrying(*s));

	delete t;
	delete s;
	delete of;
}
