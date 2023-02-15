#pragma once

#include <string>

class command {
    public:
	virtual ~command();
	[[nodiscard]] virtual auto execute() const -> std::string = 0;
};
