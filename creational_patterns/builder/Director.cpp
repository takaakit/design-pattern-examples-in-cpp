// ˅
#include "creational_patterns/builder/Builder.h"
#include "creational_patterns/builder/Director.h"

// ˄

Director::Director(Builder* builder)
	: builder(builder)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Director::~Director()
{
	// ˅
	
	// ˄
}

void Director::build()
{
	// ˅
	builder->createTitle("Greeting");										// Title
	builder->createSection("Morning and Afternoon");						// Section
	builder->createItems({"Good morning.", "Hello."});						// Items
	builder->createSection("Evening");										// Other section
	builder->createItems({"Good evening.", "Good night.", "Goodbye."});		// Other items
	builder->close();
	// ˄
}

// ˅

// ˄
