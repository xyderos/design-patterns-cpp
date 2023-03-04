#include "component.h"

// end objects of a composition
class leaf : public component {
    public:
	leaf();

	[[nodiscard]] auto name() const -> std::string override;
};
