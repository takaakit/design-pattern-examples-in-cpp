// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_
#define STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_

// ˅
#include <map>
#include <string>

using namespace std;

// ˄

// Singleton ( based on the example code on Wikipedia )
//   https://en.wikipedia.org/w/index.php?title=Singleton_pattern&oldid=1115882454#C++
//   Note: The latest Wikipedia page has had the C++ code example removed. This link is to the page before it was removed.
class DataLibrary
{
	// ˅
	
	// ˄

public:

	static DataLibrary* getInstance();

private:

	DataLibrary();

public:

	~DataLibrary();

	// Read a data library file.
	const map<string, string> getProperties(const string& data_library_name) const;

	// ˅
public:
	
protected:
	
private:
	DataLibrary(const DataLibrary&) = delete;
	DataLibrary& operator=(const DataLibrary&) = delete;
	DataLibrary(DataLibrary&&) = delete;
	DataLibrary& operator=(DataLibrary&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_

// ˅

// ˄
