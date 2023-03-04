#include "car.h"

class saab : public factory_car {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
