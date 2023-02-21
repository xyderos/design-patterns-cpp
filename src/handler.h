#pragma once

#include <string>

// declare methods for building the chain of handlers
class handler {
    public:
	virtual auto set_next(handler *handler) -> class handler * = 0;
	virtual auto handle(std::string request) -> std::string = 0;
	virtual ~handler() = default;
};
