#include <cppunit/extensions/HelperMacros.h>

#include "../../src/bridge/freebsd.h"
#include "../../src/bridge/os.h"
#include "../../src/bridge/status.h"
#include "../../src/bridge/ubuntu.h"
#include "test_status.h"

void
test_status::test_status_with_ubuntu_should_return_ubuntu()
{
	os *o = new ubuntu();

	auto *s = new status(o);

	std::string result = s->os_name();
	std::string expected = "UBUNTU";
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete s;
	delete o;
}

void
test_status::test_status_with_freebsd_should_return_freebsd()
{
	os *o = new freebsd();

	auto *s = new status(o);

	std::string result = s->os_name();
	std::string expected = "FREEBSD";
	CPPUNIT_ASSERT_EQUAL(expected, result);

	delete s;
	delete o;
}
