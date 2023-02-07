#include "status.h"

status::status(os *type) : _op_sys(type){}

status::status(const status &other) : _op_sys(other._op_sys)
{
}

status &
status::operator=(const status &other)
{
	if(this == &other) return *this;

    this->_op_sys = other._op_sys;

    return *this;
}

status::~status()
{}

std::string
status::os_name() const
{
	return _op_sys->name();
}
