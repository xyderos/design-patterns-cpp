#pragma once

#include <string>

// declare an interface for excuting something
class command {
    public:
	virtual ~command();
	[[nodiscard]] virtual auto execute() const -> std::string = 0;
};
