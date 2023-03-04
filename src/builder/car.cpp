#include "car.h"

car::car()
    : chassis("")
    , engine("")
    , firmware("")
{
}

auto
car::to_string() const -> const std::string
{
	return "engine : " + this->engine + ", chassis : " + this->chassis +
	    ", firmware : " + firmware;
}
