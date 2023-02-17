#pragma once

#include "state.h"
#include "state_machine.h"

class context {
	/**
	 * @var State A reference to the current state of the Context.
	 */
    private:
	state *state_;
	state_machine_t current_state;

    public:
	explicit context(state *state);

	~context();

	void change_state(state *state);
	void perform_an_action();
	void perform_another_action();
	[[nodiscard]] auto get_current_state() const -> state_machine_t;
};
