// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_

// ˅
#include "behavioral_patterns/observer/Observer.h"

class NumberSubject;

// ˄

// Display values as a bar chart.
class BarChartObserver : public Observer
{
	// ˅
	
	// ˄

private:

	const NumberSubject* numberSubject;

public:

	BarChartObserver(const NumberSubject* numberSubject);

	~BarChartObserver();

	void update(const Subject* changedSubject) const;

	// ˅
public:
	
protected:
	
private:
	BarChartObserver(const BarChartObserver&) = delete;
	BarChartObserver& operator=(const BarChartObserver&) = delete;
	BarChartObserver(BarChartObserver&&) = delete;
	BarChartObserver& operator=(BarChartObserver&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_

// ˅

// ˄
