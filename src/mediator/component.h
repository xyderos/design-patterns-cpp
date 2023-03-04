#pragma once

#include "mediator.h"

// base class that can store mediators instance
class component {
    protected:
	mediator *mediator_;

    public:
	explicit component(mediator *mediator = nullptr);
	void set_mediator(mediator *mediator);
};
