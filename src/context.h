#pragma once

#include "strategy.h"

#include <memory>
class context {
    private:
	std::unique_ptr<strategy> strategy_;

    public:
	explicit context(std::unique_ptr<strategy> &&strategy = {});

	void set_strategy(std::unique_ptr<strategy> &&strategy);

	[[nodiscard]] auto business_logic() const -> std::string;
};
