// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_
#define CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_

// ˅

// ˄

// Singleton ( based on the example code on Wikipedia )
//   https://en.wikipedia.org/w/index.php?title=Singleton_pattern&oldid=1115882454#C++
//   Note: The latest Wikipedia page has had the C++ code example removed. This link is to the page before it was removed.
class Singleton
{
	// ˅
	
	// ˄

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
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_SINGLETON_SINGLETON_H_

// ˅

// ˄
