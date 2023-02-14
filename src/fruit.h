#pragma once

#include <string>

class fruit {
    public:
	// mark it as default since calling the destructor of the child class it
	// wouldn't call the parent's one
	virtual ~fruit() = default;
	// declares some sort of basic functionality each fruit should have
	virtual std::string to_string() const = 0;
};