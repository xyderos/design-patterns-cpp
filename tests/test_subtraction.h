#include <cppunit/extensions/HelperMacros.h>

class TestSubtration : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(TestSubtration);
	CPPUNIT_TEST(testSubtration);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void testSubtration(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestSubtration);