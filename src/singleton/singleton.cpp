#include "singleton.h"

singleton *singleton::instance = nullptr;

auto
singleton::get_instance(const std::string &value) -> singleton *
{
	if (!singleton::instance) {
		singleton::instance = new singleton(value);
	}
	return singleton::instance;
}

void
singleton::destroy()
{
	delete instance;
	instance = nullptr;
}

void
singleton::business_logic()
{
}

auto
singleton::message() const -> std::string
{
	return this->msg;
}

singleton::singleton(std::string s)
    : msg(std::move(s))
{
}

singleton::~singleton() = default;
