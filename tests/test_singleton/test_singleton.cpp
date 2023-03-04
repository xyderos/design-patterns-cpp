#include "../../src/singleton/singleton.h"
#include "test_singleton.h"

#include <thread>

static std::string r1;
static std::string r2;

static void
foo()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	singleton *singleton = singleton::get_instance("foo");
	r1 = singleton->message();
}

static void
bar()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	singleton *singleton = singleton::get_instance("bar");
	r2 = singleton->message();
}

void
test_singleton::test_singleton_multithreaded()
{
	std::thread t1(foo);
	std::thread t2(bar);
	t1.join();
	t2.join();

	singleton::destroy();

	CPPUNIT_ASSERT_EQUAL(r1, r2);
}
