// ˅
#include <string>
#include <sstream>
#include "creational_patterns/abstract_factory/table_factory/TableData.h"
#include "creational_patterns/abstract_factory/factory/Item.h"

using namespace std;

// ˄

TableData::TableData(const string& name)
	// ˅
	: Data(name)
	// ˄
{
	// ˅
	
	// ˄
}

TableData::~TableData()
{
	// ˅
	
	// ˄
}

string TableData::toHTML()
{
	// ˅
	stringstream buffer;
	buffer << "<td><table width=\"100%\" border=\"2\">" << endl;
	buffer << "<tr><td bgcolor=\"#00CC00\" align=\"center\" colspan=\"" << to_string(items.size()) << "\"><b>" << name << "</b></td></tr>" << endl;
	buffer << "<tr>" << endl;
	vector<shared_ptr<Item>>::const_iterator it = items.begin();
	while (it != items.end()) {
		buffer << (*it)->toHTML();
		++it;
	}
	buffer << "</tr>" << endl;
	buffer << "</table></td>" << endl;
	return buffer.str();
	// ˄
}

// ˅

// ˄
