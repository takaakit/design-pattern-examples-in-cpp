#include <iostream>
#include <memory>
#include "behavioral_patterns/chain_of_responsibility/LazySupporter.h"
#include "behavioral_patterns/chain_of_responsibility/MoodySupporter.h"
#include "behavioral_patterns/chain_of_responsibility/SpecialSupporter.h"
#include "behavioral_patterns/chain_of_responsibility/LimitedSupporter.h"

using namespace std;

/*
A trouble is turned around among supporters, and the trouble will be handled by the supporter who can handle it. There are four types of supporters below:
* LazySupporter doesn't handle any trouble
* MoodySupporter handles odd ID troubles
* SpecialSupporter handles a trouble of the target ID.
* LimitedSupporter handles troubles below the limit ID.
 */

int main() {
	unique_ptr<LazySupporter> emily(new LazySupporter("Emily"));
	unique_ptr<MoodySupporter> william(new MoodySupporter("William"));
	unique_ptr<SpecialSupporter> amelia(new SpecialSupporter("Amelia", 6));
	unique_ptr<LimitedSupporter> joseph(new LimitedSupporter("Joseph", 5));

	//Make a chain.
	emily->setNext(william.get())->setNext(amelia.get())->setNext(joseph.get());

	// Various troubles occurred.
	for (int i = 0; i < 10; i++) {
		unique_ptr<Trouble> trouble(new Trouble(i));
		emily->support(trouble.get());
	}

	return 0;
}
