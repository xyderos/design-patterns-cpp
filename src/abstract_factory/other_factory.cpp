#include "man.h"
#include "other_factory.h"
#include "volvo.h"

auto
other_factory::make_car() const -> factory_car *
{
	return new volvo();
}

auto
other_factory::make_truck() const -> truck *
{
	return new man();
}
