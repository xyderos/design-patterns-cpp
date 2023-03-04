#include "abstract_handler.h"

abstract_handler::abstract_handler()
    : next_handler_(nullptr)
{
}

abstract_handler::abstract_handler(const abstract_handler &ref)
    : next_handler_(ref.next_handler_)
{
}

auto
abstract_handler::operator=(const abstract_handler &rhs) -> abstract_handler &
{
	if (this == &rhs) {
		return *this;
	}

	this->next_handler_ = rhs.next_handler_;

	return *this;
}

auto
abstract_handler::set_next(handler *hndlr) -> handler *
{
	// chain calls to handlers
	this->next_handler_ = hndlr;

	return hndlr;
}

auto
abstract_handler::handle(std::string request) -> std::string
{
	if (this->next_handler_) {
		return this->next_handler_->handle(request);
	}

	return "default";
}

abstract_handler::~abstract_handler()
{
	delete this->next_handler_;
}
