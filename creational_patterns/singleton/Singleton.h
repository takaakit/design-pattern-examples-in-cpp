// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_
#define CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_

// ˅
#include <memory>

using namespace std;

// ˄

class Singleton
{
	// ˅
	
	// ˄

private:

	static Singleton* instance;

public:

	static Singleton* getInstance();

private:

	Singleton();

public:

	~Singleton();

	// ˅
public:
	
protected:
	
private:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_

// ˅

// ˄
