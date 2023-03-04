#include <cppunit/extensions/HelperMacros.h>

class test_singleton : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_singleton);
	CPPUNIT_TEST(test_singleton_multithreaded);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_singleton_multithreaded();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_singleton);
