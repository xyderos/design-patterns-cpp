#pragma once

#include "state.h"

class a_state : public state {
    public:
	void handle_an_action() override;

	void handle_another_action() override;
};
