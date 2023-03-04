#include "../../src/composite/component.h"
#include "../../src/composite/composite.h"
#include "../../src/composite/leaf.h"
#include "test_complex_components.h"

void
test_complex_components::test_complex_composite_should_generate_leafs()
{
	composite_component *tree = new composite;
	composite_component *either_branch = new composite;

	composite_component *leaf_1 = new leaf;
	composite_component *leaf_2 = new leaf;

	either_branch->add(leaf_1);
	either_branch->add(leaf_2);

	std::string expected = "Branch(leaf + leaf)";

	CPPUNIT_ASSERT_EQUAL(expected, either_branch->name());

	delete either_branch;
	delete tree;
}

void
test_complex_components::test_complex_composite_should_generate_a_tree()
{
	composite_component *tree = new composite;
	composite_component *either_branch = new composite;

	composite_component *leaf_1 = new leaf;
	composite_component *leaf_2 = new leaf;
	composite_component *leaf_3 = new leaf;

	either_branch->add(leaf_1);
	either_branch->add(leaf_2);

	composite_component *other_branch = new composite;
	other_branch->add(leaf_3);

	tree->add(either_branch);
	tree->add(other_branch);

	std::string expected("Branch(Branch(leaf + leaf) + Branch(leaf))");
	CPPUNIT_ASSERT_EQUAL(expected, tree->name());

	delete tree;
}

void
test_complex_components::
    test_complex_composite_should_generate_a_tree_and_include_other_compoments_agnostically()
{
	composite_component *tree = new composite;
	composite_component *either_branch = new composite;

	composite_component *leaf_1 = new leaf;
	composite_component *leaf_2 = new leaf;
	composite_component *leaf_3 = new leaf;

	either_branch->add(leaf_1);
	either_branch->add(leaf_2);

	composite_component *other_branch = new composite;
	other_branch->add(leaf_3);

	tree->add(either_branch);
	tree->add(other_branch);

	composite_component *l = new leaf();

	if (tree->is_composite()) {
		tree->add(l);
	}

	std::string expected(
	    "Branch(Branch(leaf + leaf) + Branch(leaf) + leaf)");
	CPPUNIT_ASSERT_EQUAL(expected, tree->name());

	delete tree;
}

void
test_complex_components::
    test_complex_composite_should_delete_a_compoment_from_the_tree_sucessfully()
{
	composite_component *tree = new composite;
	composite_component *either_branch = new composite;

	composite_component *leaf_1 = new leaf;
	composite_component *leaf_2 = new leaf;
	composite_component *leaf_3 = new leaf;

	either_branch->add(leaf_1);
	either_branch->add(leaf_2);

	composite_component *other_branch = new composite;
	other_branch->add(leaf_3);

	tree->add(either_branch);
	tree->add(other_branch);

	composite_component *l = new leaf();

	if (tree->is_composite()) {
		tree->add(l);
	}

	tree->remove(l);

	std::string expected("Branch(Branch(leaf + leaf) + Branch(leaf))");
	CPPUNIT_ASSERT_EQUAL(expected, tree->name());

	delete tree;
}
