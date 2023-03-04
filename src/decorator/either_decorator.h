#include "component.h"
#include "decorator.h"

// the actual decorator
// can also call default implementation of the decoration abstract class as an
// extra step instead of touching the object directly
class either_decorator : public decorator {

    public:
	explicit either_decorator(component *);
	[[nodiscard]] auto message() const -> std::string override;
};
