#include "apple_generator.h"

fruit *
apple_generator::fruit_generator() const
{
	return new apple();
}