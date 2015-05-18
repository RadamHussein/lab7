#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	cout << endl << endl;
	cout << "Now, let's demonstrate a queue-like list by adding";
	cout << " 10, 13 and 17 to the list in that order." << endl;
	cout << "Press [ENTER] to continue:";
	cin.get();
	cout << endl;

	List myList;
	myList.addBack(10);
	cout << "10 has been added to the list" << endl;
	myList.addBack(13);
	cout << "13 has been added to the list" << endl;
	myList.addBack(17);
	cout << "17 has been added to the list" << endl << endl;
	myList.print();
	cout << endl;

	cout << endl;
	cout << "Now we will remove the first item from the list" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	myList.remove(10);
	cout << endl;
	myList.print();
	cout << endl << endl;

	cout << "Now we will demonstrate a stack-like list by adding";
	cout << " new items to the front of the list." << endl;
	cout << "Let's add integers 19, 20 and 21" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	cout << endl;

	myList.addFront(19);
	cout << "19 has been added to the list" << endl;
	myList.addFront(20);
	cout << "20 has been added to the list" << endl;
	myList.addFront(21);
	cout << "21 has been added to the list" << endl << endl;
	myList.print();
	cout << endl << endl;
	
	cout << "Now we will remove the first number in the list" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	cout << endl;
	cout << myList.removeFront() << " has been removed from the list";
	cout << endl;
	myList.print();
	cout << endl << endl;
	
	return 0;
}
