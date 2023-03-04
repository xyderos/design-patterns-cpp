#include "car.h"

class volvo : public factory_car {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
