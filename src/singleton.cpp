#include "singleton.h"

singleton *singleton::instance = nullptr;

singleton *
singleton::get_instance(const std::string &value)
{
	if (!singleton::instance) {
		singleton::instance = new singleton(value);
	}
	return singleton::instance;
}

void
singleton::business_logic()
{
}

std::string
singleton::message() const
{
	return this->msg;
}

singleton::singleton(const std::string &s)
    : msg(s)
{
}

singleton::~singleton()
{
}
