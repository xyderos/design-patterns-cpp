#include "../src/a_strategy.h"
#include "../src/another_strategy.h"
#include "../src/context.h"
#include "test_strategy.h"

void
test_strategy::test_strategy_of_a_strategy_should_be_okay(void)
{

	context ctx(std::make_unique<a_strategy>());

	auto result = ctx.business_logic();

	std::string expected("ginga");
	CPPUNIT_ASSERT_EQUAL(expected, result);
}

void
test_strategy::
    test_strategy_of_a_strategy_with_changing_strategy_should_be_okay(void)
{

	context ctx(std::make_unique<a_strategy>());

	auto result = ctx.business_logic();
	ctx.set_strategy(std::make_unique<another_strategy>());

	result = ctx.business_logic();
	std::string expected("gunga");
	CPPUNIT_ASSERT_EQUAL(expected, result);
}
