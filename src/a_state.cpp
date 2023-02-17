#include "a_state.h"
#include "another_state.h"
#include "context.h"

void
a_state::handle_an_action()
{
	this->ctx->change_state(new another_state);
}

void
a_state::handle_another_action()
{
}
