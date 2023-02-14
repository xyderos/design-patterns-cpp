#include "simple.h"

simple::simple(std::string pl)
    : payload(pl)
{
}

std::string
simple::execute() const
{
	return "simple:" + this->payload;
}
