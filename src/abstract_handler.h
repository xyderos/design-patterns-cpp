#pragma once

#include "handler.h"

class abstract_handler : public handler {
    private:
	handler *next_handler_;

    public:
	abstract_handler();
	abstract_handler(const abstract_handler &);
	abstract_handler &operator=(const abstract_handler &);
	handler *set_next(handler *) override;
	std::string handle(std::string request) override;
	~abstract_handler();
};