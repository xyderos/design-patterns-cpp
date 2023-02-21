#pragma once

#include "originator.h"
#include "snapshot.h"

#include <vector>

// doesnt depend on a implementation clas, rarther than the interface
// doenst have access to the actual state, works with all the snapshots
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
