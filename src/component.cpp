#include "component.h"
#include "mediator.h"

component::component(mediator *mediator)
    : mediator_(mediator)
{
}

void
component::set_mediator(mediator *mediator)
{
	this->mediator_ = mediator;
}
