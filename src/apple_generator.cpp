#include "apple_generator.h"

auto
apple_generator::fruit_generator() const -> fruit *
{
	return new apple();
}
