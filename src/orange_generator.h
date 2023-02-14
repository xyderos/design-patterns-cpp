#include "factory.h"
#include "fruit.h"
#include "orange.h"

class orange_generator : public factory {
	fruit *fruit_generator() const override;
};