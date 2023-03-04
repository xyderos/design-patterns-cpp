#include "a_state.h"
#include "another_state.h"
#include "context.h"
#include "state_machine.h"

#include <string>
#include <typeinfo>

context::context(state *state)
    : state_(nullptr)
{
	this->change_state(state);
}

context::~context()
{
	delete state_;
}

void
context::change_state(state *state)
{
	if (this->state_ != nullptr) {
		delete this->state_;
	}

	this->current_state = state->get_state();
	this->state_ = state;
	this->state_->set_context(this);
}
void
context::perform_an_action()
{
	this->state_->handle_an_action();
}
void
context::perform_another_action()
{
	this->state_->handle_another_action();
}

auto
context::get_current_state() const -> state_machine_t
{
	return this->current_state;
}
