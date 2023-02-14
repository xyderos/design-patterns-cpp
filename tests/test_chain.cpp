#include "../src/abstract_handler.h"
#include "../src/bar_handler.h"
#include "../src/foo_handler.h"
#include "../src/zot_handler.h"
#include "test_chain.h"

void
test_chain::test_chain_with_no_segments_should_return_default_values(void)
{
	abstract_handler *a = new abstract_handler;

	std::string expected("default");

	CPPUNIT_ASSERT_EQUAL(expected, a->handle("foo"));

	delete a;
}

void
test_chain::test_chain_with_segments_should_return_correct_values(void)
{
	foo_handler *f = new foo_handler;
	bar_handler *b = new bar_handler;
	zot_handler *z = new zot_handler;

	f->set_next(b)->set_next(z);

	std::string expected("handler:zot");

	std::string result = f->handle("zot");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete f;
}

void
test_chain::test_chain_with_segments_and_invalid_value_should_return_default(
    void)
{
	foo_handler *f = new foo_handler;
	bar_handler *b = new bar_handler;
	zot_handler *z = new zot_handler;

	f->set_next(b)->set_next(z);

	std::string expected("default");

	std::string result = f->handle("gurka");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete f;
}