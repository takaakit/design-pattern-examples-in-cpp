#include <iostream>
#include <memory>
#include "behavioral_patterns/observer/RandomNumber.h"
#include "behavioral_patterns/observer/DigitObserver.h"
#include "behavioral_patterns/observer/BarChartObserver.h"

using namespace std;

/*
Observers observe objects generating a numerical value and display the value. The display formats are digits and bar charts.
 */

int main() {
	unique_ptr<RandomNumber> number(new RandomNumber());
	unique_ptr<DigitObserver> digit_observer(new DigitObserver());
	number->addObserver(digit_observer.get());
	unique_ptr<BarChartObserver> bar_chart_observer(new BarChartObserver());
	number->addObserver(bar_chart_observer.get());
	number->generate();

	return 0;
}
