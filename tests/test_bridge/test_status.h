#include <cppunit/extensions/HelperMacros.h>

class test_status : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_status);
	CPPUNIT_TEST(test_status_with_ubuntu_should_return_ubuntu);
	CPPUNIT_TEST(test_status_with_freebsd_should_return_freebsd);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_status_with_ubuntu_should_return_ubuntu();
	void test_status_with_freebsd_should_return_freebsd();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_status);
