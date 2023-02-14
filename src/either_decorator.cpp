#include "either_decorator.h"

either_decorator::either_decorator(component *c)
    : decorator(c)
{
}

std::string
either_decorator::message() const
{
	return "either x " + this->comp->message();
}
