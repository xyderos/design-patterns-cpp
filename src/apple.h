#include "fruit.h"

class apple : public fruit
{
    public:
    std::string to_string() const override;
};

