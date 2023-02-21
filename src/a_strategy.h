#include "strategy.h"

// implement based on the base strategy
class a_strategy : public strategy {
    public:
	[[nodiscard]] auto calculate(const std::string &data) const
	    -> std::string override;
};
