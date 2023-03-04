#pragma once

#include "abstract.h"

// implement abstract methods and optionally default operations
class an_implementation : public abstract {
    protected:
	void something_required() const override;
	void this_is_also_required() const override;
};
