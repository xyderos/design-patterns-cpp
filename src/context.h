#pragma once

#include "strategy.h"

#include <memory>

// interface of interest
class context {
    private:
	// holds a reference to any strategy, agnostic of implementations
	std::unique_ptr<strategy> strategy_;

    public:
	explicit context(std::unique_ptr<strategy> &&strategy = {});

	void set_strategy(std::unique_ptr<strategy> &&strategy);

	// delegate work to the object
	[[nodiscard]] auto business_logic() const -> std::string;
};
