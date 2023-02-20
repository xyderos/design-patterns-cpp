#pragma once

#include <string>

class strategy {
    public:
	virtual ~strategy() = default;
	[[nodiscard]] virtual auto calculate(std::string_view data) const
	    -> std::string = 0;
};
