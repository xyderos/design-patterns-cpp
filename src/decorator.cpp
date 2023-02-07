#include "decorator.h"

decorator::decorator(component * c) : comp(c)
{
}

decorator::decorator(const decorator &other) : comp(other.comp)
{
}

decorator &
decorator::operator=(const decorator &other)
{
	if(this == &other) return *this;

    this->comp = other.comp;

    return *this;
}

std::string
decorator::message() const
{
	return this->comp->message();
}
