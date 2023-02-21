#pragma once

#include "interface.h"

// contains business logic, its behavior should be enchanced
class real : public interface {
    public:
	[[nodiscard]] auto common() const -> std::string override;
};
