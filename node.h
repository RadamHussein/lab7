#include <stddef.h>

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

