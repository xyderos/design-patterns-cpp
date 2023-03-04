#include "truck.h"

class man : public truck {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
	[[nodiscard]] auto what_am_I_carrying(const car &cargo) const
	    -> std::string override;
};
