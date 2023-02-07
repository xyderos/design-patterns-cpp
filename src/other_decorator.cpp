#include "other_decorator.h"

other_decorator::other_decorator(component *c): decorator(c) {}

std::string
other_decorator::message() const
{
	return "other x " + this->comp->message();
}
