#include <bits/stdc++.h>
using namespace std;

/* 
Friend Class A friend class can access private and protected members of other class in which it is declared as friend. It is sometimes useful to allow a particular class to access private members of other class. For example, a LinkedList class may be allowed to access private members of Node. 

A friend class can access both private and protected members of the class in which it has been declared as friend.
*/

class Node {
private:
	int key;
	Node* next;
	/* Other members of Node Class */

	// Now class LinkedList can
	// access private members of Node
	friend class LinkedList;
};


int main()
{
   
}
