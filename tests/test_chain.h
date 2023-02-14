#include <cppunit/extensions/HelperMacros.h>

class test_chain : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_chain);
	CPPUNIT_TEST(test_chain_with_no_segments_should_return_default_values);
	CPPUNIT_TEST(test_chain_with_segments_should_return_correct_values);
	CPPUNIT_TEST(
	    test_chain_with_segments_and_invalid_value_should_return_default);

	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp(void) { }
	void tearDown(void) { }

    protected:
	void test_chain_with_no_segments_should_return_default_values(void);
	void test_chain_with_segments_should_return_correct_values(void);
	void test_chain_with_segments_and_invalid_value_should_return_default(
	    void);
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_chain);