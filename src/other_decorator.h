#include "component.h"
#include "decorator.h"

// the actual decorator
// can also call default implementation of the decoration abstract class as an
// extra step instead of touching the object directly
class other_decorator : public decorator {

    public:
	explicit other_decorator(component *component);
	[[nodiscard]] auto message() const -> std::string override;
};
