#include "volvo_builder.h"

volvo_builder::volvo_builder() : volvo(new car()){}

volvo_builder::volvo_builder(const volvo_builder &other) : volvo(other.volvo){}

volvo_builder&
volvo_builder::operator=(const volvo_builder &other)
{
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

car *
volvo_builder::get_car()
{
    auto *to_return = this->volvo;
    this->reset();
    return to_return;
}