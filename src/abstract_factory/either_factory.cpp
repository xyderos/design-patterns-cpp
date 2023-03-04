#include "either_factory.h"
#include "saab.h"
#include "scania.h"

auto
either_factory::make_car() const -> car *
{
	return new saab();
}

auto
either_factory::make_truck() const -> truck *
{
	return new scania();
}
