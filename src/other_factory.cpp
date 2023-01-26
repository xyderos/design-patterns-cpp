#include "other_factory.h"
#include "man.h"
#include "volvo.h"

car *
other_factory::make_car() const
{
	return new volvo();
}

truck *
other_factory::make_truck() const
{
	return new man();
}