// CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

/* This is a doubly linked %list. Traversal up and down the list requires linear time, but adding and removing elements (or nodes) is done in constant time, regardless of where the change takes place. Unlike std::vector and std::deque, random-access iterators are not provided, so subscripting ( * [] ) access is not allowed. For algorithms which only need sequential access, this lack makes no difference. Also unlike the other standard containers, std::list provides specialized algorithms %unique to linked lists, such as splicing, sorting, and in-place reversal. A couple points on memory allocation for list<Tp>: First, we never actually allocate a Tp, we allocate List_node<Tp>'s and trust [20.1.5]/4 to DTRT. This is to ensure that after elements from %list<X,Alloc1> are spliced into %list<X,Alloc2>, destroying the memory of the second %list is a valid operation, i.e., Alloc1 giveth and Alloc2 taketh away. Second, a %list conceptually represented as A <---> B <---> C <---> D is actually circular; a link exists between A and D. The %list class holds (as its only data member) a private list::iterator pointing to D, not to A! To get to the head of the %list, we start at the tail and move forward by one. When this member iterator's next/previous pointers refer to itself, the %list is %empty. */



// function for printing the elements in a list
void showlist(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

// Driver Code
int main()
{

	list<int> gqlist1, gqlist2;

	for (int i = 0; i < 10; ++i) {
		gqlist1.push_back(i * 2);
		gqlist2.push_front(i * 3);
	}
	cout << "\nList 1 (gqlist1) is : ";
	showlist(gqlist1);

	cout << "\nList 2 (gqlist2) is : ";
	showlist(gqlist2);

	cout << "\ngqlist1.front() : " << gqlist1.front();
	cout << "\ngqlist1.back() : " << gqlist1.back();

	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "\ngqlist2.pop_back() : ";
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "\ngqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "\ngqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}
