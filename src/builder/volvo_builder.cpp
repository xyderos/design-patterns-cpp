#include "volvo_builder.h"

volvo_builder::volvo_builder()
    : volvo(new car())
{
}

volvo_builder::volvo_builder(const volvo_builder &other)
    : volvo(other.volvo)
{
}

auto
volvo_builder::operator=(const volvo_builder &other) -> volvo_builder &
{
	if (this == &other) {
		return *this;
	}

	this->volvo = other.volvo;
	return *this;
}

volvo_builder::~volvo_builder()
{
	delete this->volvo;
}

void
volvo_builder::reset()
{
	this->volvo = new car();
}

void
volvo_builder::make_engine() const
{
	this->volvo->engine = "very fast";
}

void
volvo_builder::make_chassis() const
{
	this->volvo->chassis = "pretty lightweight";
}

void
volvo_builder::make_firmware() const
{
	this->volvo->firmware = "v1.0.0";
}

auto
volvo_builder::get_car() -> car *
{
	auto *to_return = this->volvo;
	// try resetting since we want to make it reusable
	this->reset();
	return to_return;
}
