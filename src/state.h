#pragma once

#include "state_machine.h"
class context;

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
