// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_

// ˅
#include <string>
#include <vector>

using namespace std;

// ˄

// Hold data which will be interpreted.
class Context
{
	// ˅
	
	// ˄

private:

	vector<string> tokens;

	vector<string>::iterator iter;

public:

	Context(const string& text);

	~Context();

	string nextToken();

	string getToken();

	void slideToken(const string& token);

	const int getNumber();

	// ˅
public:
	
protected:
	
private:
	Context(const Context&) = delete;
	Context& operator=(const Context&) = delete;
	Context(Context&&) = delete;
	Context& operator=(Context&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_

// ˅

// ˄
