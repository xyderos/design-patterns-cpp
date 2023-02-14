#pragma once

#include "car.h"

#include <string>

class truck {
    public:
	// mark it as default since calling the destructor of the child class it
	// wouldn't call the parent's one
	virtual ~truck() = default;
	// basic functionality for a truck
	virtual std::string to_string() const = 0;
	// prove that the object can interact with other objects also
	virtual std::string what_am_I_carrying(const car &cargo) const = 0;
};