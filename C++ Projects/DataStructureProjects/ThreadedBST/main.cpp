//<main.cpp> Initializing file for Double-threaded BST project. Creates a double-threaded BST and displays the functionality, such as printing and inserting values.
//<CSIS 215-B01> Telle Miller

#include <iostream>
#include <string>
#include "BSTNode.h"
#include "BST.h"

int main() {

	cout << "Telle Miller -- Assignment #2" << endl;     //Required program statement

	BST<int, string> tree; //Creates new tree that holds KV pairs

	//Inserting required data values
	tree.insert(77, "seventy-seven");
	tree.insert(70, "seventy");
	tree.insert(75, "seventy-five");
	tree.insert(66, "sixty-six");
	tree.insert(79, "seventy-nine");
	tree.insert(68, "sixty-eight");
	tree.insert(67, "sixty-seven");
	tree.insert(69, "sixty-nine");
	tree.insert(90, "ninety");
	tree.insert(85, "eighty-five");
	tree.insert(83, "eighty-three");
	tree.insert(87, "eighty-seven");
	tree.insert(65, "sixty-five");

	cout << "My BST tree size is " << tree.size() << "." << endl << endl;

	//Printing tree in visual structure
	cout << "My tree's structure is (demonstrates changes to print function) " << endl;
	tree.print();
	cout << endl << endl;

	//Printing tree in order
	cout << "Printing tree inorder (uses right threads and printInorder function): " << endl << endl;
	tree.printInorder();
	cout << endl << endl;

	//Printing tree in reverse order
	cout << "Printing tree in reverse order (uses left threads and printReverse function): " << endl << endl;
	tree.printReverse();

	system("pause");
	return 0;
}