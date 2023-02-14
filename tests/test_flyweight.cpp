#include <stdio.h>

#include "../src/factory.h"
#include "test_flyweight.h"

#include <iostream>

void
test_flyweight::test_flyweight_should_add_if_element_is_not_present(void)
{
	factory *f = new factory(
	    std::vector<shared_state> { shared_state("John", "Doa", "1"),
		shared_state("Jill", "Doe", "2") });

	CPPUNIT_ASSERT(f->get_flyweights().size() == 2);

	auto fw = f->get_flyweight(shared_state("Jack", "Doo", "3"));

	CPPUNIT_ASSERT(f->get_flyweights().size() == 3);

	delete f;
}

void
test_flyweight::test_flyweight_should_return_correct_element(void)
{
	factory *f = new factory(
	    std::vector<shared_state> { shared_state("John", "Doa", "1"),
		shared_state("Jill", "Doe", "2") });

	auto to_be_inserted = shared_state("Jack", "Doo", "3");

	auto fw = f->get_flyweight(to_be_inserted);

	std::string expected = fw.get_shared_state()->to_string() + "_state";

	CPPUNIT_ASSERT_EQUAL(expected, to_be_inserted.to_string() + "_state");

	delete f;
}

void
test_flyweight::test_flyweight_should_keep_consistent_shared_state(void)
{
	factory *f = new factory(
	    std::vector<shared_state> { shared_state("John", "Doa", "1"),
		shared_state("Jill", "Doe", "2") });

	auto to_be_inserted = shared_state("Jack", "Doo", "3");

	auto fw = f->get_flyweight(to_be_inserted);

	auto first_candidate = fw.business_logic(
	    unique_state("either", "other"));
	auto second_candidate = fw.business_logic(
	    unique_state("other", "either"));

	CPPUNIT_ASSERT_EQUAL(first_candidate.substr(0,
				 first_candidate.find(":")),
	    second_candidate.substr(0, second_candidate.find(":")));

	delete f;
}