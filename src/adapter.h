#pragma once

#include "not_adapted.h"
#include "target.h"

// make the not_adapted's interface compatible with he targets interface
class adapter : public target {
    private:
	not_adapted *na;

    public:
	explicit adapter(not_adapted *);
	adapter(const adapter &);
	auto operator=(const adapter &) -> adapter &;
	[[nodiscard]] auto message() const -> std::string override;
};
