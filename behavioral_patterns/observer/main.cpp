#include <iostream>
#include <memory>
#include "behavioral_patterns/observer/RandomNumber.h"
#include "behavioral_patterns/observer/DigitObserver.h"
#include "behavioral_patterns/observer/BarChartObserver.h"

using namespace std;

// Observers observe objects generating a numerical value and display the value.

int main() {
	unique_ptr<RandomNumber> number = unique_ptr<RandomNumber>(new RandomNumber());
	unique_ptr<DigitObserver> digit_observer = unique_ptr<DigitObserver>(new DigitObserver());
	unique_ptr<BarChartObserver> bar_chart_observer = unique_ptr<BarChartObserver>(new BarChartObserver());
	number->addObserver(digit_observer.get());
	number->addObserver(bar_chart_observer.get());
	number->generate();

	return 0;
}
