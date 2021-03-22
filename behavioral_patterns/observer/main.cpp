#include <iostream>
#include <memory>
#include <random>
#include "behavioral_patterns/observer/NumberSubject.h"
#include "behavioral_patterns/observer/DigitObserver.h"
#include "behavioral_patterns/observer/BarChartObserver.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

/*
Observers observe a Subject object holding a numerical value and display the value.
The display formats are digits and bar charts.
 */

int main() {
	unique_ptr<NumberSubject> numberSubject(new NumberSubject());
	unique_ptr<DigitObserver> digit_observer(new DigitObserver(numberSubject.get()));
	numberSubject->attach(digit_observer.get());
	unique_ptr<BarChartObserver> bar_chart_observer(new BarChartObserver(numberSubject.get()));
	numberSubject->attach(bar_chart_observer.get());

	for (int i = 0; i < 20; ++i) {
		random_device random;
		mt19937 mt(random());
		uniform_int_distribution<int> random_value(0, 49);
		numberSubject->setValue(random_value(mt));

#ifdef _MSC_VER
		Sleep(200);
#else
		usleep(0.2 * 1000000);
#endif
	}

	return 0;
}
