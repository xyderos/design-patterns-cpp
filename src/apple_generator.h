#include "factory.h"
#include "fruit.h"
#include "apple.h"

class apple_generator : public factory
{
    public:

    fruit* fruit_generator() const override;
};