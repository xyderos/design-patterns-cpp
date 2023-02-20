#include "car.h"

class saab : public car {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
