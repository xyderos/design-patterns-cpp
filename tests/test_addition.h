#include <cppunit/extensions/HelperMacros.h>

class TestAddition : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(TestAddition);
	CPPUNIT_TEST(testAddition);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void testAddition(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestAddition);