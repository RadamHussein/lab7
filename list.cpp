#include <iostream>
#include "list.h"

using namespace std;
/*******************************************************************
 * Function: List() constructor
 * Description: Initializes the head pointer to NULL
 * Parameters: none
 *******************************************************************/
List::List()
{
	head = NULL;
}
/********************************************************************
 * Function: addBack()
 * Description: Takes in an int, creates a new node with the int, 
		and adds the node to the back of the list
 * Parameters: Takes in an integer value
 *******************************************************************/
void List::addBack(int number)
{
	if (head == NULL)
	{
		head = new Node(number);
	}
	else
	{
		Node *ptrNode = head;
		while (ptrNode->next != NULL)
		{
			ptrNode = ptrNode->next;
			
		}
		ptrNode->next = new Node(number);
	}
}

/********************************************************************
 * Function: addFront()
 * Description: Takes in an int, creates a new Node with int value, 
		then adds the node to the front of the list
 * Parameters: Takes in an integer value
********************************************************************/
void List::addFront(int number)
{
	if (head == NULL)
	{
		head = new Node(number);
	}
	else
	{
		head = new Node(number, head);
		
		
		
		
		
		
	}
}	
/********************************************************************
 * Function: List() destructor
 * Description: destroys the list
 * Parameters: none
 *******************************************************************/
List::~List()
{
	Node *ptrNode = head;	//begin at head of list
	while (ptrNode != NULL)
	{
		Node *garbage = ptrNode;
		ptrNode = ptrNode->next;
		delete garbage;
	}
}

/********************************************************************
 * Function: print()
 * Description: transverses the list printing the value at each node
 * Parameters: none
 *******************************************************************/
void List::print() const
{	
	cout << "List now contains ";
	Node *ptrNode = head;	//begin at head of list
	while (ptrNode)
	{
		cout << ptrNode->value << " ";
		ptrNode = ptrNode->next;
	}
}

/**************************************************************
 * Function: removeFront()
 * Description: Removes and element from the front of the list
		and updates remaining pointers
 * Parameters: none
 * Output: returns and integer value
**************************************************************/
int List::removeFront()
{
	Node *ptrNode;

	if (!head)
	{
		return 0;
	}
	
	else
	{	
		int value = head->value;	//store val to return
		ptrNode = head;
		head = head->next;
		delete ptrNode;
		return value;
	}
}

/**************************************************************
 * Function: removeBack()
 * Description: removes an element from the back of the list
 * Parameters: none
 * Output: returns and integer value
**************************************************************/
int List::removeBack()
{
	Node *ptrNode, *previousPtrNode;

	//check if list is empty
	if (!head)
	{
		return 0;
	}
	
	else 
	{
		Node *previousPtrNode = head;
		Node *ptrNode = head->next;

		//iterate through list skipping middle values
		while (ptrNode->next != NULL)
		{
			previousPtrNode = ptrNode;
			ptrNode = ptrNode->next;
		}

		//create variable to return 
		int nodeVal = ptrNode->value;
		delete ptrNode;
		previousPtrNode->next = NULL;
		return nodeVal;
	}
}
