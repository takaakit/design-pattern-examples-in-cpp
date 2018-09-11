#include <iostream>
#include <memory>
#include "behavioral_patterns/chain_of_responsibility/LazySupporter.h"
#include "behavioral_patterns/chain_of_responsibility/MoodySupporter.h"
#include "behavioral_patterns/chain_of_responsibility/SpecialSupporter.h"
#include "behavioral_patterns/chain_of_responsibility/LimitedSupporter.h"

using namespace std;

// Someone handles a trouble.

int main() {
	unique_ptr<LazySupporter> emily = unique_ptr<LazySupporter>(new LazySupporter("Emily"));
	unique_ptr<MoodySupporter> william = unique_ptr<MoodySupporter>(new MoodySupporter("William"));
	unique_ptr<SpecialSupporter> amelia = unique_ptr<SpecialSupporter>(new SpecialSupporter("Amelia", 153));
	unique_ptr<SpecialSupporter> michael = unique_ptr<SpecialSupporter>(new SpecialSupporter("Michael", 340));
	unique_ptr<LimitedSupporter> joseph = unique_ptr<LimitedSupporter>(new LimitedSupporter("Joseph", 250));
	unique_ptr<LimitedSupporter> lily = unique_ptr<LimitedSupporter>(new LimitedSupporter("Lily", 350));

	//Make a chain.
	emily->setNext(william.get())->setNext(amelia.get())->setNext(michael.get())->setNext(joseph.get())->setNext(lily.get());

	// Various troubles occurred.
	for (int i = 0; i < 500; i += 17) {
		unique_ptr<Trouble> trouble = unique_ptr<Trouble>(new Trouble(i));
		emily->support(trouble.get());
	}

	return 0;
}
