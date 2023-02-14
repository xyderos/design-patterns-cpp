#pragma once

#include "business_logic.h"
#include "command.h"

class complex : public command {
    private:
	business_logic *bl;

	std::string a_;
	std::string b_;

    public:
	complex(business_logic *l, std::string a, std::string b);
	complex(const complex &);
	complex &operator=(const complex &);
	~complex();
	std::string execute() const override;
};