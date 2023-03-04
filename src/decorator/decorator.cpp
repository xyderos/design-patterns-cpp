#include "decorator.h"

decorator::decorator(component *c)
    : comp(c)
{
}

decorator::decorator(const decorator &other)
    : comp(other.comp)
{
}

auto
decorator::operator=(const decorator &other) -> decorator &
{
	if (this == &other) {
		return *this;
	}

	this->comp = other.comp;

	return *this;
}

auto
decorator::message() const -> std::string
{
	return this->comp->message();
}
