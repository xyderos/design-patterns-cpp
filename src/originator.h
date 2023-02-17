#pragma once

#include "snapshot.h"

#include <string>
#include <utility>

class originator {
    private:
	std::string state_;

	auto generate(int length) -> std::string;

    public:
	explicit originator(std::string state);

	void business_logic_that_changes_the_state();

	auto save() -> snapshot *;

	void restore(snapshot *snpsht) { this->state_ = snpsht->state(); }
};
