#pragma once

#include <string>

// base interface defines the operations that can be changed by the decorators
class component {
    public:
	virtual ~component();
	[[nodiscard]] virtual auto message() const -> std::string = 0;
};
