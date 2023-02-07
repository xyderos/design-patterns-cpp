#include "test_complex_components.h"
#include "../src/leaf.h"
#include "../src/component.h"
#include "../src/composite.h"

#include <iostream>

void
test_complex_components::test_complex_composite_should_generate_leafs(void)
{
    component *tree = new composite;
    component *either_branch = new composite;

    component *leaf_1 = new leaf;
    component *leaf_2 = new leaf;
    
    either_branch->add(leaf_1);
    either_branch->add(leaf_2);

    std::string expected = "Branch(leaf + leaf)";

    CPPUNIT_ASSERT_EQUAL(expected, either_branch->name());
    
    delete either_branch;
    delete tree;
}

void
test_complex_components::test_complex_composite_should_generate_a_tree(void)
{
    component *tree = new composite;
    component *either_branch = new composite;

    component *leaf_1 = new leaf;
    component *leaf_2 = new leaf;
    component *leaf_3 = new leaf;
    
    either_branch->add(leaf_1);
    either_branch->add(leaf_2);
    
    component *other_branch = new composite;
    other_branch->add(leaf_3);

    tree->add(either_branch);
    tree->add(other_branch);

    std::string expected("Branch(Branch(leaf + leaf) + Branch(leaf))");
    CPPUNIT_ASSERT_EQUAL(expected, tree->name());

    delete tree;
}