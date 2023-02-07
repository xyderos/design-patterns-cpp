#include "component.h"

class leaf : public component
{
    public:
    leaf();

    std::string name() const override;
};