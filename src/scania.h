#include "truck.h"

class scania : public truck {
    public:
	std::string to_string() const override;
	std::string what_am_I_carrying(const car &cargo) const override;
};