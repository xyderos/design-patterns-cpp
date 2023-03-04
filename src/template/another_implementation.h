#pragma once

#include "abstract.h"

// implement abstract methods and optionally default operations
class another_implementation : public abstract {
    protected:
	void something_required() const override;
	void this_is_also_required() const override;
	void a_hook() const override;
};
