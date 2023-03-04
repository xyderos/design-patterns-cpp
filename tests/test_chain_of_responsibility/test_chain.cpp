#include "../../src/chain_of_responsibility/abstract_handler.h"
#include "../../src/chain_of_responsibility/bar_handler.h"
#include "../../src/chain_of_responsibility/foo_handler.h"
#include "../../src/chain_of_responsibility/zot_handler.h"
#include "test_chain.h"

void
test_chain::test_chain_with_no_segments_should_return_default_values()
{
	auto *a = new abstract_handler;

	std::string expected("default");

	CPPUNIT_ASSERT_EQUAL(expected, a->handle("foo"));

	delete a;
}

void
test_chain::test_chain_with_segments_should_return_correct_values()
{
	auto *f = new foo_handler;
	auto *b = new bar_handler;
	auto *z = new zot_handler;

	f->set_next(b)->set_next(z);

	std::string expected("handler:zot");

	std::string result = f->handle("zot");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete f;
}

void
test_chain::test_chain_with_segments_and_invalid_value_should_return_default()
{
	auto *f = new foo_handler;
	auto *b = new bar_handler;
	auto *z = new zot_handler;

	f->set_next(b)->set_next(z);

	std::string expected("default");

	std::string result = f->handle("gurka");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete f;
}
