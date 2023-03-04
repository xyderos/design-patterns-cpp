#include "orange_generator.h"

auto
orange_generator::fruit_generator() const -> fruit *
{
	return new orange();
}
