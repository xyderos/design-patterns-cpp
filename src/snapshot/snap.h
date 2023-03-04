#pragma once

#include "snapshot.h"

#include <chrono>
#include <string>
#include <utility>

// stores the originators state
class snap : public snapshot {
    private:
	std::string state_;
	std::string date_;

    public:
	snap(std::string state, std::string date);

	// this will be used to restore the state from the originator
	[[nodiscard]] auto state() const -> std::string override;

	[[nodiscard]] auto name() const -> std::string override;

	[[nodiscard]] auto date() const -> std::string override;
};
