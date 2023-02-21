#include "other_decorator.h"

other_decorator::other_decorator(component *c)
    : decorator(c)
{
}

auto
other_decorator::message() const -> std::string
{
	return "other x " + this->comp->message();
}
