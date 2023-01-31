#pragma once

#include "not_adapted.h"
#include "target.h"

class adapter : public target {
    private:
	not_adapted *na;

    public:
	adapter(not_adapted *);
	adapter(const adapter &);
	adapter &operator=(const adapter &);
	std::string message() const override;
};