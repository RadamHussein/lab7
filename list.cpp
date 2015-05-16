#include <iostream>
#include "list.h"

using namespace std;
/*******************************************************************
 * List() constructor
 *******************************************************************/
List::List()
{
	head = NULL;
}
/********************************************************************
 * addNumber
 *******************************************************************/
void List::addNumber(int number)
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
 * destructor
 *******************************************************************/
List::~List()
{
	Node *ptrNode = head;
	while (ptrNode != NULL)
	{
		Node *garbage = ptrNode;
		ptrNode = ptrNode->next;
		delete garbage;
	}
}

/********************************************************************
 * print()
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

/********************************************************************
 * remove()
 *******************************************************************/
void List::remove(int number)
{
	Node *ptrNode, *previousPtrNode;

	if (!head)
	{
		return;
	}
	
	if (head->value == number)
	{
		ptrNode = head;
		head = head->next;
		delete ptrNode;
	}

	else
	{
		ptrNode = head;
		
		while (ptrNode != NULL && ptrNode->value != number)
		{
			previousPtrNode = ptrNode;
			ptrNode = ptrNode->next;
		}

		if (ptrNode)
		{
			previousPtrNode->next = ptrNode->next;
			delete ptrNode;
		}
	}
}
