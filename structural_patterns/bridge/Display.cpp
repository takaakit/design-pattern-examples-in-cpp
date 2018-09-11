// ˅
#include "structural_patterns/bridge/Display.h"
#include "structural_patterns/bridge/DisplayImpl.h"

// ˄

Display::Display(DisplayImpl* impl)
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

void Display::output()
{
	// ˅
	open();
	write();
	close();
	// ˄
}

void Display::open()
{
	// ˅
	impl->implOpen();
	// ˄
}

void Display::write()
{
	// ˅
	impl->implWrite();
	// ˄
}

void Display::close()
{
	// ˅
	impl->implClose();
	// ˄
}

// ˅

// ˄
