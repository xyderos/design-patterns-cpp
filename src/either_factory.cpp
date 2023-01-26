#include "either_factory.h"
#include "saab.h"
#include "scania.h"

car *
either_factory::make_car() const
{
	return new saab();
}

truck *
either_factory::make_truck() const
{
	return new scania();
}