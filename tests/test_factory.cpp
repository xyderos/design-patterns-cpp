#include <cppunit/extensions/HelperMacros.h>

#include "../src/apple_generator.h"
#include "../src/orange_generator.h"
#include "test_factory.h"

void
test_factory::test_factory_with_orange_input_should_generate_an_orange()
{
	auto *generator = new orange_generator();

	std::string expected = "orange";

	CPPUNIT_ASSERT_EQUAL(expected, generator->use_the_generator());

	delete generator;
}

void
test_factory::test_factory_with_apple_input_should_generate_an_apple()
{
	auto *generator = new apple_generator();

	std::string expected = "apple";

	CPPUNIT_ASSERT_EQUAL(expected, generator->use_the_generator());

	delete generator;
}
