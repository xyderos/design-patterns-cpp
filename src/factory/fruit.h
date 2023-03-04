#pragma once

#include <string>

// declare the operations all producxts shall implement
class fruit {
    public:
	// mark it as default since calling the destructor of the child class it
	// wouldn't call the parent's one
	virtual ~fruit() = default;
	// declares some sort of basic functionality each fruit should have
	[[nodiscard]] virtual auto to_string() const -> std::string = 0;
};
