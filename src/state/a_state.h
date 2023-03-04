#pragma once

#include "state.h"

// some state
class a_state : public state {
    public:
	void handle_an_action() override;

	void handle_another_action() override;

	[[nodiscard]] auto get_state() const -> state_machine_t override;
};
