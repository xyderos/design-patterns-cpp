#pragma once

#include <string>

// Each group should have a base interface and all variants shall implement it
class car {
    public:
	// mark it as default since calling the destructor of the child class it
	// wouldn't call the parent's one
	virtual ~car() = default;
	// basic functionality for a car
	[[nodiscard]] virtual auto to_string() const -> std::string = 0;
};
