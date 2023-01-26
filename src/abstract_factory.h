#include "truck.h"

class abstract_factory
{
    public:
    virtual ~abstract_factory() = default;
    virtual car* make_car() const = 0;
    virtual truck* make_truck() const = 0;
};