#include "node.h"

class List
{
private:
	Node *head;
public:
	//constructor
	List();
	~List();	//destructor
	void addFront(int number);
	void addBack(int number);
	int removeFront();
	int removeBack();
	void print() const;
};
