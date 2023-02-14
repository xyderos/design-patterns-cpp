#include "component.h"
#include "decorator.h"

class either_decorator : public decorator {

    public:
	either_decorator(component *);
	std::string message() const override;
};