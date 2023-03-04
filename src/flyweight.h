#pragma once

#include "shared_state.h"
#include "unique_state.h"

class flyweight {
	// the flyweight keeps a part of the state that belongs to multiple
	// entities and can thus be called with other unique states to produce
	// results or cause side effects in the business logic function
	shared_state *shared;

    public:
	explicit flyweight(const shared_state &s);
	flyweight(const flyweight &other);
	auto operator=(const flyweight &other) -> flyweight &;
	~flyweight();
	[[nodiscard]] auto get_shared_state() const -> shared_state *;

	[[nodiscard]] auto business_logic(const unique_state &unique) const
	    -> std::string;
};
