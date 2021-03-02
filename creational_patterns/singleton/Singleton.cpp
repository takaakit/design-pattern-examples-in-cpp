// ˅
#include "creational_patterns/singleton/Singleton.h"

// ˄

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance()
{
	// ˅
	if (instance == nullptr) {
		instance = new Singleton();
	}
	return instance;
	// ˄
}

Singleton::Singleton()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Singleton::~Singleton()
{
	// ˅
	
	// ˄
}

// ˅

// ˄
