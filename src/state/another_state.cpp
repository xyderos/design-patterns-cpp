#include "a_state.h"
#include "another_state.h"
#include "context.h"
#include "no_state.h"
#include "state_machine.h"

void
another_state::handle_an_action()
{
	this->ctx->change_state(new no_state);
}

void
another_state::handle_another_action()
{
	this->ctx->change_state(new a_state);
}

auto
another_state::get_state() const -> state_machine_t
{
	return state_machine_t::ANOTHER_STATE;
}
