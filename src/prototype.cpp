#include "prototype.h"

#include <iostream>
#include <string>

prototype::prototype()
    : name("")
    , field(0)
    , pointer_field(nullptr)
{
}

prototype::prototype(const prototype &other) = default;

auto
prototype::operator=(const prototype &lhs) -> prototype &
{
	if (this == &lhs) {
		return *this;
	}

	this->name = lhs.name;
	this->field = lhs.field;
	this->pointer_field = lhs.pointer_field;

	return *this;
}

prototype::prototype(std::string s)
    : name(std::move(s))
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
