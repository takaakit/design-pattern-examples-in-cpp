// ˅
#include "creational_patterns/singleton/Singleton.h"

// ˄

Singleton* Singleton::getInstance()
{
	// ˅
	static Singleton* instance = new Singleton();
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
