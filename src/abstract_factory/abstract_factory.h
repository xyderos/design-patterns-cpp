#include "truck.h"

// The abstract factory interface declares a set of methods that return
// different abstract products
class abstract_factory {
    public:
	virtual ~abstract_factory() = default;
	[[nodiscard]] virtual auto make_car() const -> factory_car * = 0;
	[[nodiscard]] virtual auto make_truck() const -> truck * = 0;
};
