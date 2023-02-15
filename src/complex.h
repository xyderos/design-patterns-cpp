#pragma once

#include "business_logic.h"
#include "command.h"

class complex : public command {
    private:
	business_logic *bl;

	std::string a_;
	std::string b_;

    public:
	complex(complex &&) = delete;
	auto operator=(complex &&) -> complex & = delete;
	complex(business_logic *l, std::string a, std::string b);
	complex(const complex &);
	auto operator=(const complex &) -> complex &;
	~complex() override;
	[[nodiscard]] auto execute() const -> std::string override;
};
