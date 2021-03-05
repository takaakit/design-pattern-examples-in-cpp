// ˅
#include <iostream>
#include "behavioral_patterns/observer/DigitObserver.h"
#include "behavioral_patterns/observer/Number.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

DigitObserver::DigitObserver()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

DigitObserver::~DigitObserver()
{
	// ˅
	
	// ˄
}

void DigitObserver::update(const Number* number) const
{
	// ˅
	cout << "Digit    : " << number->getValue() << endl;
	
#ifdef _MSC_VER
    Sleep(100);
#else
    usleep(0.1 * 1000000);
#endif
	// ˄
}

// ˅

// ˄
