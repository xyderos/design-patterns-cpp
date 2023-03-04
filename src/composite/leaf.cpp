#include "leaf.h"

leaf::leaf()
    : composite_component()
{
}

auto
leaf::name() const -> std::string
{
	return "leaf";
}
