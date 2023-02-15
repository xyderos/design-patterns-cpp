#include "simple.h"

#include <utility>

simple::simple(std::string pl)
    : payload(std::move(pl))
{
}

auto
simple::execute() const -> std::string
{
	return "simple:" + this->payload;
}
