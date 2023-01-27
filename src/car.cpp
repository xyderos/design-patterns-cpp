#include "car.h"

car::car():chassis(""), engine(""), firmware("") {}

const std::string
car::to_string() const
{
	return "engine : " + this->engine + ", chassis : " + this->chassis + ", firmware : " + firmware;
}