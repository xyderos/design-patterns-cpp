#include "strategy.h"

class another_strategy : public strategy {
    public:
	[[nodiscard]] auto calculate(std::string_view data) const
	    -> std::string override;
};
