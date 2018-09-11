#include <iostream>
#include <memory>
#include "behavioral_patterns/visitor/Directory.h"
#include "behavioral_patterns/visitor/File.h"
#include "behavioral_patterns/visitor/ListVisitor.h"

using namespace std;

// Visitors visit a file system composed of files and directories, and displays a list of files/directories.

int main(int argc, char* argv[]) {
	cout << "Create a file system..." << endl;
	unique_ptr<Directory> root_dir = unique_ptr<Directory>(new Directory("root"));
	unique_ptr<Directory> home_dir = unique_ptr<Directory>(new Directory("home"));
	unique_ptr<Directory> bin_dir = unique_ptr<Directory>(new Directory("bin"));
	unique_ptr<Directory> etc_dir = unique_ptr<Directory>(new Directory("etc"));
	unique_ptr<Directory> emily_dir = unique_ptr<Directory>(new Directory("elimy"));
	unique_ptr<Directory> james_dir = unique_ptr<Directory>(new Directory("james"));
	unique_ptr<Directory> olivia_dir = unique_ptr<Directory>(new Directory("olivia"));

	root_dir->add(home_dir.get());
	root_dir->add(bin_dir.get());
	root_dir->add(etc_dir.get());

	unique_ptr<File> file1 = unique_ptr<File>(new File("ls", 100));
	bin_dir->add(file1.get());
	unique_ptr<File> file2 = unique_ptr<File>(new File("mkdir", 50));
	bin_dir->add(file2.get());
	home_dir->add(emily_dir.get());
	home_dir->add(james_dir.get());
	home_dir->add(olivia_dir.get());

	unique_ptr<File> file3 = unique_ptr<File>(new File("homework.doc", 40));
	emily_dir->add(file3.get());
	unique_ptr<File> file4 = unique_ptr<File>(new File("homework.doc", 50));
	james_dir->add(file4.get());
	unique_ptr<File> file5 = unique_ptr<File>(new File("app.exe", 60));
	james_dir->add(file5.get());
	unique_ptr<File> file6 = unique_ptr<File>(new File("homework.doc", 70));
	olivia_dir->add(file6.get());
	unique_ptr<File> file7 = unique_ptr<File>(new File("app.exe", 80));
	olivia_dir->add(file7.get());
	unique_ptr<File> file8 = unique_ptr<File>(new File("tips.html", 90));
	olivia_dir->add(file8.get());

	unique_ptr<ListVisitor> list_visitor = unique_ptr<ListVisitor>(new ListVisitor());
	root_dir->accept(list_visitor.get());

	return 0;
}
