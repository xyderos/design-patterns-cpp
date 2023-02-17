#include "state.h"

state::~state() = default;

void
state::set_context(context *c)
{
	this->ctx = c;
}
