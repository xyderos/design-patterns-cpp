#pragma once

#include "car.h"

#include <string>

// Each group should have a base interface and all variants shall implement it
class truck {
    public:
	// mark it as default since calling the destructor of the child class it
	// wouldn't call the parent's one
	virtual ~truck() = default;
	// basic functionality for a truck
	[[nodiscard]] virtual auto to_string() const -> std::string = 0;
	// prove that the object can interact with other objects also
	[[nodiscard]] virtual auto what_am_I_carrying(const factory_car &cargo) const
	    -> std::string = 0;
};
