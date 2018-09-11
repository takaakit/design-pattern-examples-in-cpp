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

void DigitObserver::update(const Number* number)
{
	// ˅
	cout << "Digit    : " << number->value << endl;

#ifdef _MSC_VER
    Sleep(100);
#else
    usleep(0.1 * 1000000);
#endif
	// ˄
}

// ˅

// ˄
