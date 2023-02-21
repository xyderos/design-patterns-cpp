#pragma once

#include "state.h"
#include "state_machine.h"

// interface of interest, keeps a reference to the state which represetnts the
// current state
class context {
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
