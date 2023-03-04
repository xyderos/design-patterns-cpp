#include "truck.h"

class scania : public truck {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
	[[nodiscard]] auto what_am_I_carrying(const factory_car &cargo) const
	    -> std::string override;
};
