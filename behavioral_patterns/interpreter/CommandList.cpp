// ˅
#include <iostream>
#include "behavioral_patterns/interpreter/CommandList.h"
#include "behavioral_patterns/interpreter/Command.h"
#include "behavioral_patterns/interpreter/Context.h"

using namespace std;

// ˄

CommandList::CommandList()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

CommandList::~CommandList()
{
	// ˅
	for (Node* node : nodes) {
		delete node;
	}
	nodes.clear();
	// ˄
}

void CommandList::parse(Context* context)
{
	// ˅
	while (true) {
		if (context->getToken() == "") {
			cerr << "Missing 'end'" << endl;
			exit(1);
		}
		else if (context->getToken() == "end") {
			context->slideToken("end");
			break;
		}
		else {
			Node* a_node = new Command();
			a_node->parse(context);

			nodes.push_back(a_node);	// Hold the parsed node
		}
	}
	// ˄
}

const string CommandList::toString() const
{
	// ˅
	string ret = "[";
	vector<Node*>::const_iterator it = begin(nodes);
	while (it != end(nodes)) {
		ret += (*it)->toString();
		++it;
		if (it != end(nodes)) {
			ret += ", ";
		}
	}
	ret += "]";
	return ret;
	// ˄
}

// ˅

// ˄
