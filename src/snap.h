#pragma once

#include "snapshot.h"

#include <chrono>
#include <string>
#include <utility>

class snap : public snapshot {
    private:
	std::string state_;
	std::string date_;

    public:
	snap(std::string state, std::string date);

	[[nodiscard]] auto state() const -> std::string override;

	[[nodiscard]] auto name() const -> std::string override;

	[[nodiscard]] auto date() const -> std::string override;
};
