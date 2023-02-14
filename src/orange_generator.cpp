#include "orange_generator.h"

fruit *
orange_generator::fruit_generator() const
{
	return new orange();
}