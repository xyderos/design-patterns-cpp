#include "os.h"

class freebsd : public os
{
    public:
    std::string name() const override;
};