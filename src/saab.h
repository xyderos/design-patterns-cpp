#include "car.h"

class saab : public car
{
    public:
    std::string to_string() const override;
};