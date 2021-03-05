// ˅
#include "structural_patterns/bridge/Display.h"
#include "structural_patterns/bridge/DisplayImpl.h"

// ˄

Display::Display(const DisplayImpl* impl)
	: impl(impl)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Display::~Display()
{
	// ˅
	
	// ˄
}

void Display::output() const
{
	// ˅
	open();
	write();
	close();
	// ˄
}

void Display::open() const
{
	// ˅
	impl->implOpen();
	// ˄
}

void Display::write() const
{
	// ˅
	impl->implWrite();
	// ˄
}

void Display::close() const
{
	// ˅
	impl->implClose();
	// ˄
}

// ˅

// ˄
