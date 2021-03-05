#include <iostream>
#include <memory>
#include "behavioral_patterns/visitor/Directory.h"
#include "behavioral_patterns/visitor/File.h"
#include "behavioral_patterns/visitor/ListVisitor.h"

using namespace std;

/*
Visitor visits the file system composed of files and directories, and displays a list of files/directories.
 */

int main(int argc, char* argv[]) {
	cout << "Create a file system..." << endl;

	unique_ptr<Directory> bin_dir(new Directory("bin"));
	unique_ptr<File> ls_file(new File("ls", 20));
	bin_dir->add(ls_file.get());
	unique_ptr<File> mkdir_file(new File("mkdir", 40));
	bin_dir->add(mkdir_file.get());

	unique_ptr<Directory> emily_dir(new Directory("elimy"));
	unique_ptr<File> homework_file(new File("homework.doc", 60));
	emily_dir->add(homework_file.get());

	unique_ptr<Directory> james_dir(new Directory("james"));
	unique_ptr<File> app_file(new File("app.exe", 80));
	james_dir->add(app_file.get());

	unique_ptr<Directory> home_dir(new Directory("home"));
	home_dir->add(emily_dir.get());
	home_dir->add(james_dir.get());

	unique_ptr<Directory> root_dir(new Directory("root"));
	root_dir->add(home_dir.get());
	root_dir->add(bin_dir.get());

	unique_ptr<ListVisitor> list_visitor(new ListVisitor());
	root_dir->accept(list_visitor.get());

	return 0;
}
