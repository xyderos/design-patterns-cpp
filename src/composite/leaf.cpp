#include "leaf.h"

leaf::leaf()
    : component()
{
}

auto
leaf::name() const -> std::string
{
	return "leaf";
}
