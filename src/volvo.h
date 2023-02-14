#include "car.h"

class volvo : public car {
    public:
	std::string to_string() const override;
};