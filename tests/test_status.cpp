#include <cppunit/extensions/HelperMacros.h>
#include "../src/status.h"
#include "../src/os.h"
#include "../src/freebsd.h"
#include "../src/ubuntu.h"
#include "test_status.h"

void
test_status::test_status_with_ubuntu_should_return_ubuntu(void)
{
	os* o = new ubuntu();

	status* s = new status(o);

	std::string result = s->os_name();
	std::string expected = "UBUNTU";
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete s;
	delete o;
}

void
test_status::test_status_with_freebsd_should_return_freebsd(void)
{
	os* o = new freebsd();

	status* s = new status(o);

	std::string result = s->os_name();
	std::string expected = "FREEBSD";
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete s;
	delete o;
}
