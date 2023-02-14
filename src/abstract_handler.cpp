#include "abstract_handler.h"

abstract_handler::abstract_handler()
    : next_handler_(nullptr)
{
}

abstract_handler::abstract_handler(const abstract_handler &ref)
    : next_handler_(ref.next_handler_)
{
}

abstract_handler &
abstract_handler::operator=(const abstract_handler &rhs)
{
	if (this == &rhs)
		return *this;

	this->next_handler_ = rhs.next_handler_;

	return *this;
}

handler *
abstract_handler::set_next(handler *hndlr)
{
	this->next_handler_ = hndlr;

	return hndlr;
}

std::string
abstract_handler::handle(std::string request)
{
	if (this->next_handler_)
		return this->next_handler_->handle(request);

	return "default";
}

abstract_handler::~abstract_handler()
{
	delete this->next_handler_;
}
