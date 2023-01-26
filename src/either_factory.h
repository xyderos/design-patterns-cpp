#include "abstract_factory.h"

class either_factory : public abstract_factory
{
    public:
    car* make_car() const override;
    truck* make_truck() const override; 
};