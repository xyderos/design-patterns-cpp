#include "fruit.h"

class orange : public fruit {
    public:
	std::string to_string() const override;
};