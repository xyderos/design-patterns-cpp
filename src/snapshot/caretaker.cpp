#include "caretaker.h"
#include "snapshot.h"

caretaker::caretaker(originator *originator)
    : originator_(originator)
{
}

caretaker::~caretaker()
{
	for (auto m : snapshots) {
		delete m;
	}
}

void
caretaker::backup()
{
	this->snapshots.push_back(this->originator_->save());
}

auto
caretaker::history() const -> std::vector<snapshot *>
{
	return this->snapshots;
}

void
caretaker::undo()
{
	if (!this->snapshots.size()) {
		return;
	}
	snapshot *snp = this->snapshots.back();

	this->snapshots.pop_back();

	try {
		this->originator_->restore(snp);
	} catch (...) {
		this->undo();
	}
}
