#include "car.h"

class volvo : public car {
    public:
	[[nodiscard]] auto to_string() const -> std::string override;
};
