#include "strategy.h"

// implement based on the base strategy
class a_strategy : public strategy {
    public:
	[[nodiscard]] auto calculate(std::string_view data) const
	    -> std::string override;
};
