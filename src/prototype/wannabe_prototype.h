#pragma once

#include "prototype.h"

// return a pointer to the cloned object
class wannabe_prototype : public prototype {
	int wannabe_field;

    public:
	wannabe_prototype(const std::string &, int);

	// since we return a replica of the object, we have the responsibility
	// to free up that memory later
	[[nodiscard]] auto clone() const -> prototype * override;
};
