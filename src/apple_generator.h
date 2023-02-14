#include "apple.h"
#include "factory.h"
#include "fruit.h"

class apple_generator : public factory {
    public:
	fruit *fruit_generator() const override;
};