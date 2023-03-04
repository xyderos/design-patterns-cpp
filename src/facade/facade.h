#pragma once

#include "allocator.h"
#include "scheduler.h"

// provide a simple interface into a set of complex objects, delegates the work
// to the objects themselves but manages their lifecycle
class facade {
    protected:
	allocator *a;
	scheduler *sched;

    public:
	explicit facade(allocator *a1 = nullptr, scheduler *sched1 = nullptr);
	facade(const facade &);
	auto operator=(const facade &) -> facade &;
	~facade();

	[[nodiscard]] auto initialization() const -> std::string;
};
