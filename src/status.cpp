#include "status.h"

status::status(os *type)
    : _op_sys(type)
{
}

status::status(const status &other) = default;

auto
status::operator=(const status &other) -> status &
{
	if (this == &other) {
		return *this;
	}

	this->_op_sys = other._op_sys;

	return *this;
}

status::~status() = default;

auto
status::os_name() const -> std::string
{
	return _op_sys->name();
}
