#include "either_decorator.h"

either_decorator::either_decorator(decorator_component *c)
    : decorator(c)
{
}

auto
either_decorator::message() const -> std::string
{
	return "either x " + this->comp->message();
}
