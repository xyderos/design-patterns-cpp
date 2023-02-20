#include "abstract_factory.h"

// Implementations of factories produce a family of products that belong to a
// single variant
class either_factory : public abstract_factory {
    public:
	[[nodiscard]] auto make_car() const -> car * override;
	[[nodiscard]] auto make_truck() const -> truck * override;
};
