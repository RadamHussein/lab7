#include "node.h"

class List
{
/*
protected:
	struct Node
	{
		int value;
		Node *next;
		Node(int newVal, Node *next1 = NULL)
		{
			value = newVal;
			next = next1;
		}
	};
*/
private:
	Node *head;
public:
	//constructor
	List();
	~List();	//destructor
	void addNumber(int number);
	void remove(int number);
	void print() const;
};
