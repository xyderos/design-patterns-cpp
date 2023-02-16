#pragma once

#include "mediator.h"

class component {
    protected:
	mediator *mediator_;

    public:
	explicit component(mediator *mediator = nullptr);
	void set_mediator(mediator *mediator);
};
