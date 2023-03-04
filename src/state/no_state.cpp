#include "a_state.h"
#include "another_state.h"
#include "context.h"
#include "no_state.h"

void
no_state::handle_an_action()
{
	this->ctx->change_state(new no_state);
}

void
no_state::handle_another_action()
{
	this->ctx->change_state(new no_state);
}

auto
no_state::get_state() const -> state_machine_t
{
	return state_machine_t::NO_STATE;
}
