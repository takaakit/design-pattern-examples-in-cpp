// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_
#define STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_

// ˅
#include <map>
#include <string>

using namespace std;

// ˄

class DataLibrary
{
	// ˅
	
	// ˄

private:

	static DataLibrary* instance;

public:

	static DataLibrary* getInstance();

private:

	DataLibrary();

	~DataLibrary();

public:

	// Read a data library file.
	const map<string, string> getProperties(const string& data_library_name) const;

	// ˅
public:
	
protected:
	
private:
	DataLibrary(const DataLibrary&) = delete;
	DataLibrary& operator=(const DataLibrary&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FACADE_DATALIBRARY_H_

// ˅

// ˄
