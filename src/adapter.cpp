#include "adapter.h"

adapter::adapter(not_adapted *n)
    : na(n)
{
}

adapter::adapter(const adapter &other)
    : na(other.na)
{
}

adapter &
adapter::operator=(const adapter &lhs)
{
	if (&lhs == this)
		return *this;

	this->na = lhs.na;

	return *this;
}

std::string
adapter::message() const
{
	std::string to_be_adapted = this->na->message();
	return "waddup means : " + to_be_adapted;
}