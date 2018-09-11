// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_
#define BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_

// ˅
#include <string>
#include <vector>

using namespace std;

// ˄

// Analyze the syntax
class Context
{
	// ˅
	
	// ˄

private:

	vector<string> nodes;

	vector<string>::iterator current_node;

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
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_INTERPRETER_CONTEXT_H_

// ˅

// ˄
