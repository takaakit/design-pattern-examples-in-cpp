// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_BUILDER_DIRECTOR_H_
#define CREATIONAL_PATTERNS_BUILDER_DIRECTOR_H_

// ˅
class Builder;

// ˄

class Director
{
	// ˅
	
	// ˄

private:

	Builder* builder;

public:

	Director(Builder* builder);

	~Director();

	// Construct a document
	void build();

	// ˅
public:
	
protected:
	
private:
	Director(const Director&) = delete;
	Director& operator=(const Director&) = delete;
	Director(Director&&) = delete;
	Director& operator=(Director&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_BUILDER_DIRECTOR_H_

// ˅

// ˄
