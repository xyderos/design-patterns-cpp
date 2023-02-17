#include "../src/caretaker.h"
#include "../src/originator.h"
#include "../src/snapshot.h"
#include "test_snapshot.h"

void
test_snapshot::test_snapshot_(void)
{
	auto *o = new originator("Super-duper-super-puper-super.");
	auto *c = new caretaker(o);
	c->backup();
	o->business_logic_that_changes_the_state();

	std::cout << c->history();

	delete o;
	delete c;
}

/*

originator->DoSomething();
	caretaker->Backup();
	originator->DoSomething();
	caretaker->Backup();
	originator->DoSomething();
	std::cout << "\n";
	caretaker->ShowHistory();
	std::cout << "\nClient: Now, let's rollback!\n\n";
	caretaker->Undo();
	std::cout << "\nClient: Once more!\n\n";
	caretaker->Undo();
*/