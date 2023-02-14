#include "facade.h"

facade::facade(allocator *a1, scheduler *sched1)
    : a(a1 ? a1 : new allocator)
    , sched(sched1 ? sched1 : new scheduler)
{
}

facade::facade(const facade &other)
    : facade(other.a, other.sched)
{
}

facade &
facade::operator=(const facade &other)
{
	if (this == &other)
		return *this;

	this->a = other.a;
	this->sched = other.sched;

	return *this;
}

facade::~facade()
{
	delete this->a;
	delete this->sched;
}

std::string
facade::initialization()
{
	std::string res;

	res += this->a->before();
	res += this->sched->before();
	res += this->a->after();
	res += this->sched->after();

	return res;
}
