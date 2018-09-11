// ˅
#include "creational_patterns/singleton/Singleton.h"

// ˄

Singleton* Singleton::instance = nullptr;

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

Singleton* Singleton::getInstance()
{
	// ˅
	if (instance == nullptr) {
		instance = new Singleton();
	}
	return instance;
	// ˄
}

// ˅

// ˄
