#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	cout << endl << endl;
	cout << "First we will create a new list with 3 integer values";
	cout << " 10, 13 and 17." << endl;
	cout << "Press [ENTER] to continue:";
	cin.get();

	List myList;
	myList.addNumber(10);
	cout << "10 has been added to the list" << endl;
	myList.addNumber(13);
	cout << "13 has been added to the list" << endl;
	myList.addNumber(17);
	cout << "17 has been added to the list" << endl << endl;
	myList.print();

	cout << endl;
	cout << "Now we will remove the first item from the list" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	myList.remove(10);
	cout << endl;
	myList.print();
	
	return 0;
}
