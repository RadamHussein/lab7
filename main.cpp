/************************************************************
 * Program Filename: main.cpp
 * Author: Adam Smith
 * Date: 05/17/2015
 * Description: This program uses linked lists to simulate queue 
		and stack behavior. It acts like a queue in that
		it takes in new items and places them at the back
		of the list. It is then able to remove these items
		from the front of the list. It acts like a stack
		in that it adds new items to the front of the list
		and removes items from the back of the list.
 * Input: The user is only required to press the [ENTER] key 
	in order to allow the program to continue to run to 
	completion.
 * Output: The program will output instructions to the user. 
	It will also keep the user informed as to what is going
	on by listing the integers that are being inserted and 
	removed and by printing the list. 
*************************************************************/
#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	//instructions to the user
	cout << endl << endl;
	cout << "Now, let's demonstrate a queue-like list by adding";
	cout << " 10, 13 and 17" << endl;
	cout << "to a list in that order." << endl;
	cout << "Press [ENTER] to continue:";
	cin.get();
	cout << endl;

	//create list object and begin adding elements
	List myList;
	myList.addBack(10);
	cout << "10 has been added to the list" << endl;
	myList.addBack(13);
	cout << "13 has been added to the list" << endl;
	myList.addBack(17);
	cout << "17 has been added to the list" << endl << endl;
	
	//print the list
	myList.print();
	cout << endl;

	//instructions to user
	cout << endl;
	cout << "Now we will remove the first item from the list" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	cout << endl;

	//removes element from front of list
	cout << myList.removeFront() << " has been removed from the list";
	cout << endl << endl;

	//print the list
	myList.print();
	cout << endl << endl;

	//instructions to user
	cout << "Now we will demonstrate a stack-like list by adding" << endl;
	cout << "new items to the front of the list." << endl;;
	cout << "Let's add integers 19, 20 and 21" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	cout << endl;

	//add elements to front of list
	myList.addFront(19);
	cout << "19 has been added to the list" << endl;
	myList.addFront(20);
	cout << "20 has been added to the list" << endl;
	myList.addFront(21);
	cout << "21 has been added to the list" << endl << endl;
	
	//print list
	myList.print();
	cout << endl << endl;
	
	//instructions to user
	cout << "Now we will remove the last number in the list" << endl;
	cout << "Press [ENTER] to continue: ";
	cin.get();
	cout << endl;

	//remove element from back of list
	cout << myList.removeBack() << " has been removed from the list";
	cout << endl;

	//print list
	myList.print();
	cout << endl << endl;
	
	return 0;
}
