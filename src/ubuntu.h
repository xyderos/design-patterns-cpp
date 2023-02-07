#include "os.h"

class ubuntu : public os
{
    public:
    std::string name() const override;
};