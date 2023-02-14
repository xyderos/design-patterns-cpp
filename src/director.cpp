#include "director.h"

void
director::set_builder(builder *blder)
{
	this->bldr = blder;
}

void
director::build_ancient_car()
{
	this->bldr->make_chassis();
	this->bldr->make_engine();
}

void
director::build_modern_car()
{
	this->bldr->make_chassis();
	this->bldr->make_engine();
	this->bldr->make_firmware();
}
