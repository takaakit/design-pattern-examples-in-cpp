// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_
#define BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_

// ˅
#include "behavioral_patterns/observer/Observer.h"

// ˄

// Display values with a bar chart.
class BarChartObserver : public Observer
{
	// ˅
	
	// ˄

public:

	BarChartObserver();

	~BarChartObserver();

	void update(const Number* number) const;

	// ˅
public:
	
protected:
	
private:
	BarChartObserver(const BarChartObserver&) = delete;
	BarChartObserver& operator=(const BarChartObserver&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_OBSERVER_BARCHARTOBSERVER_H_

// ˅

// ˄
