#include <cppunit/extensions/HelperMacros.h>

class test_proxy : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_proxy);
	CPPUNIT_TEST(test_proxy_real_subject_should_execute_its_own_common);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_proxy_real_subject_should_execute_its_own_common(void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_proxy);