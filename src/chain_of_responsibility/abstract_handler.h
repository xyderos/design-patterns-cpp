#pragma once

#include "handler.h"

// default chaining behavior
class abstract_handler : public handler {
    private:
	handler *next_handler_;

    public:
	abstract_handler();
	abstract_handler(const abstract_handler &);
	auto operator=(const abstract_handler &) -> abstract_handler &;
	auto set_next(handler * /*handler*/) -> handler * override;
	auto handle(std::string request) -> std::string override;
	~abstract_handler() override;
};
