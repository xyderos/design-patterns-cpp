#pragma once

#include "abstract.h"

class an_implementation : public abstract {
    protected:
	void something_required() const override;
	void this_is_also_required() const override;
};
