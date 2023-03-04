#include "factory.h"
#include "fruit.h"
#include "orange.h"

// declare a generation method that will return the constructed object
// generators override the generate method in order to change the resulting
// product type
class orange_generator : public factory {
    public:
	[[nodiscard]] auto fruit_generator() const -> fruit * override;
};
