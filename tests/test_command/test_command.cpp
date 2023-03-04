#include "../../src/command/business_logic.h"
#include "../../src/command/client.h"
#include "../../src/command/command.h"
#include "../../src/command/complex.h"
#include "../../src/command/simple.h"
#include "test_command.h"

void
test_command::
    test_command_calling_with_simple_command_should_return_correct_values()
{
	auto *cl = new client(new simple("simple"), nullptr);

	auto result = cl->do_something();

	std::string expected("simple:simple");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}

void
test_command::
    test_command_calling_with_complex_command_should_return_correct_values()
{
	auto *l = new business_logic;
	auto *cl = new client(nullptr, new complex(l, "complex", "command"));
	auto result = cl->do_something();

	std::string expected(
	    "receiver:something:complexreceiver:something_else:command");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}

void
test_command::
    test_command_calling_with_simple_and_complex_commands_should_return_correct_values()
{
	auto *l = new business_logic;
	auto *cl = new client(new simple("simple"),
	    new complex(l, "complex", "command"));

	auto result = cl->do_something();

	std::string expected(
	    "simple:simplereceiver:something:complexreceiver:something_else:command");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}

void
test_command::
    test_command_calling_with_no_command_handlers_should_return_empty_value()
{
	auto *cl = new client(nullptr, nullptr);

	auto result = cl->do_something();

	std::string expected("");

	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete cl;
}
