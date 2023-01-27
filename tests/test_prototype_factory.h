#include <cppunit/extensions/HelperMacros.h>

class test_prototype_factory : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_prototype_factory);
	CPPUNIT_TEST(test_prototype_factory_should_create_a_deep_copy_upon_cloning);
	CPPUNIT_TEST(test_prototype_factory_should_clone_subclass_sucessfully);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_prototype_factory_should_create_a_deep_copy_upon_cloning(void);
	void test_prototype_factory_should_clone_subclass_sucessfully(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_prototype_factory);