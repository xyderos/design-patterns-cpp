#include <cppunit/extensions/HelperMacros.h>

class test_facade : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_facade);
	CPPUNIT_TEST(
	    test_facade_should_initialise_everything_accoring_to_priority);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_facade_should_initialise_everything_accoring_to_priority(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_facade);