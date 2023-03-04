#include "../../src/composite/leaf.h"
#include "test_simple_component.h"

void
test_simple_component::test_simple_component_should_return_a_leaf()
{
	component *c = new leaf();

	std::string expected = "leaf";
	std::string actual = c->name();

	CPPUNIT_ASSERT_EQUAL(expected, actual);

	delete c;
}
