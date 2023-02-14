#include <cppunit/extensions/HelperMacros.h>

class test_complex_components : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_complex_components);
	CPPUNIT_TEST(test_complex_composite_should_generate_leafs);
	CPPUNIT_TEST(test_complex_composite_should_generate_a_tree);
	CPPUNIT_TEST(
	    test_complex_composite_should_generate_a_tree_and_include_other_compoments_agnostically);
	CPPUNIT_TEST(
	    test_complex_composite_should_delete_a_compoment_from_the_tree_sucessfully);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_complex_composite_should_generate_leafs(void);
	void test_complex_composite_should_generate_a_tree(void);
	void
	test_complex_composite_should_generate_a_tree_and_include_other_compoments_agnostically(
	    void);
	void
	test_complex_composite_should_delete_a_compoment_from_the_tree_sucessfully(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_complex_components);