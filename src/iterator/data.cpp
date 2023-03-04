#include "data.h"

data::data(int a)
    : d(a)
{
}

auto
data::raw() -> int
{
	return d;
}
