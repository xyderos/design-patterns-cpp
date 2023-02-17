#include "a_state.h"
#include "another_state.h"
#include "context.h"

void
another_state::handle_an_action()
{
}

void
another_state::handle_another_action()
{
	this->ctx->change_state(new a_state);
}
