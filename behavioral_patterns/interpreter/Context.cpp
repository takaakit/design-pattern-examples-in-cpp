// ˅
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>
#include "behavioral_patterns/interpreter/Context.h"

using namespace std;

// ˄

Context::Context(const string& text)
	// ˅
	
	// ˄
{
	// ˅
	stringstream text_stream(text);
	string node = "";
	while (getline(text_stream, node, ' ') && node.empty() == false) {
		tokens.push_back(node);
	}
	
	iter = begin(tokens);
	// ˄
}

Context::~Context()
{
	// ˅

	// ˄
}

string Context::nextToken()
{
	// ˅
	++iter;
	return getToken();
	// ˄
}

string Context::getToken()
{
	// ˅
	if (iter != end(tokens)) {
		return (*iter);
	}
	else {
		return "";
	}
	// ˄
}

void Context::slideToken(const string& token)
{
	// ˅
	if (token != getToken()) {
		cerr << token << " is expected but " << getToken() << " was found." << endl;
		exit(1);
	}
	nextToken();
	// ˄
}

const int Context::getNumber()
{
	// ˅
	int ret = 0;
	const string token = getToken();
	try {
		ret = stoi(token);
	}
	catch (invalid_argument e) {
		cerr << e.what() << endl;
		exit(1);
	}
	catch (out_of_range e) {
		cerr << e.what() << endl;
		exit(1);
	}
	return ret;
	// ˄
}

// ˅

// ˄
