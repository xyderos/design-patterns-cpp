#include "../src/business_logic.h"
#include "../src/client.h"
#include "../src/command.h"
#include "../src/complex.h"
#include "../src/simple.h"
#include "test_command.h"

void
test_command::
    test_command_calling_with_simple_command_should_return_correct_values(void)
{
	client *cl = new client;
	cl->set_start(new simple("simple"));

	auto result = cl->do_something();

	std::string expected("simple:simple");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}

void
test_command::
    test_command_calling_with_complex_command_should_return_correct_values(void)
{
	client *cl = new client;
	business_logic *l = new business_logic;
	cl->set_finish(new complex(l, "complex", "command"));

	auto result = cl->do_something();

	std::string expected(
	    "receiver:something:complexreceiver:something_else:command");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete l;
	delete cl;
}

void
test_command::
    test_command_calling_with_simple_and_complex_commands_should_return_correct_values(
	void)
{
	client *cl = new client;
	cl->set_start(new simple("simple"));
	business_logic *l = new business_logic;
	cl->set_finish(new complex(l, "complex", "command"));

	auto result = cl->do_something();

	std::string expected(
	    "simple:simplereceiver:something:complexreceiver:something_else:command");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	//delete l;
	delete cl;
}

void
test_command::
    test_command_calling_with_no_command_handlers_should_return_empty_value(
	void)
{
	client *cl = new client;

	auto result = cl->do_something();

	std::string expected("");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}