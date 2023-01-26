#include <cppunit/extensions/HelperMacros.h>
#include "test_factory.h"
#include "../src/orange_generator.h"
#include "../src/apple_generator.h"

void
test_factory::test_factory_with_orange_input_should_generate_an_orange(void)
{
	orange_generator* generator = new orange_generator();

	std::string expected = "orange";

	CPPUNIT_ASSERT_EQUAL(expected, generator->use_the_generator());

	delete generator;
}

void
test_factory::test_factory_with_apple_input_should_generate_an_apple(void)
{
	apple_generator* generator = new apple_generator();

	std::string expected = "apple";

	CPPUNIT_ASSERT_EQUAL(expected, generator->use_the_generator());

	delete generator;
}
