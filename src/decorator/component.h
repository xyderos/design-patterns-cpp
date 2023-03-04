#pragma once

#include <string>

// base interface defines the operations that can be changed by the decorators
class decorator_component {
    public:
	virtual ~decorator_component();
	[[nodiscard]] virtual auto message() const -> std::string = 0;
};
