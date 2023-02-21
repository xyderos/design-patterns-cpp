#pragma once

#include <string>

// common operations between the real object and the proxy
// as long as you use the subject with its interface, you can use the proxy
class interface {
    public:
	[[nodiscard]] virtual auto common() const -> std::string = 0;
	virtual ~interface() = default;
};
