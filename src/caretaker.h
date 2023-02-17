#pragma once

#include "originator.h"
#include "snapshot.h"

#include <vector>

class caretaker {

	std::vector<snapshot *> snapshots;
	originator *originator_;

    public:
	explicit caretaker(originator *originator);

	~caretaker();

	void backup();

	void undo();

	[[nodiscard]] auto history() const -> std::vector<snapshot *>;
};
