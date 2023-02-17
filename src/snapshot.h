#pragma once

#include <string>

class snapshot {
    public:
	virtual ~snapshot();
	[[nodiscard]] virtual auto name() const -> std::string = 0;
	[[nodiscard]] virtual auto date() const -> std::string = 0;
	[[nodiscard]] virtual auto state() const -> std::string = 0;
};
