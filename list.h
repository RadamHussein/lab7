#include "node.h"

class List
{
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
