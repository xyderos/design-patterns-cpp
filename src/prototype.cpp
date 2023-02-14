#include "prototype.h"

#include <iostream>
#include <string>

prototype::prototype()
    : name("")
    , field(0)
    , pointer_field(nullptr)
{
}

prototype::prototype(const prototype &other)
    : name(other.name)
    , field(other.field)
    , pointer_field(other.pointer_field)
{
}

prototype &
prototype::operator=(const prototype &lhs)
{
	if (this == &lhs)
		return *this;

	this->name = lhs.name;
	this->field = lhs.field;
	this->pointer_field = lhs.pointer_field;

	return *this;
}

prototype::prototype(const std::string &s)
    : name(s)
    , field(0)
    , pointer_field(nullptr)
{
}

prototype::~prototype()
{
	free(this->pointer_field);
}

std::string
prototype::action(int prototype_field)
{
	this->field = prototype_field;
	return this->name + " x " + std::to_string(this->field);
}
