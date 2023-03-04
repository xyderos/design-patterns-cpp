#include "../../src/proxy/fake.h"
#include "../../src/proxy/real.h"
#include "test_proxy.h"

void
test_proxy::test_proxy_real_subject_should_execute_its_own_common()
{
	real *r = new real;

	std::string expected("real");

	CPPUNIT_ASSERT_EQUAL(expected, r->common());

	delete r;
}

void
test_proxy::test_proxy_proxy_subject_should_execute_its_own_common()
{
	real *r = new real;

	fake *f = new fake(r);

	std::string expected("fakexreal");

	CPPUNIT_ASSERT_EQUAL(expected, f->common());

	delete r;
}
