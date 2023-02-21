#pragma once

#include <string>

// specific interface used by the client code
class target {
    public:
	virtual ~target() = default;

	[[nodiscard]] virtual auto message() const -> std::string;
};
