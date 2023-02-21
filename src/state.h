#pragma once

#include "state_machine.h"
class context;

// base interface for all the concrete states and provides a reference to the
// context it is associated with
// can use it to change the state of the context
class state {

    protected:
	context *ctx {};

    public:
	virtual ~state();

	void set_context(context *c);

	virtual void handle_an_action() = 0;
	virtual void handle_another_action() = 0;
	[[nodiscard]] virtual auto get_state() const -> state_machine_t = 0;
};
