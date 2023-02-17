#include <cppunit/extensions/HelperMacros.h>

class test_snapshot : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_snapshot);
	CPPUNIT_TEST(test_snapshot_);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_snapshot_(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_snapshot);