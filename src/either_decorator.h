#include "decorator.h"
#include "component.h"

class either_decorator : public decorator {

 public:
  either_decorator(component*);
  std::string message() const override;
};