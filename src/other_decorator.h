#include "component.h"
#include "decorator.h"

class other_decorator : public decorator {

    public:
	other_decorator(component *component);
	std::string message() const override;
};