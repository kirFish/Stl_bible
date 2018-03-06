# Stl_bible
It_teen
#include <iostream>

//STL
#include <list>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main()
{
	list<int> mylist;

	if (mylist.empty())
		for (int i = 0; i < 5; i++)
			mylist.push_back(i);
			//ls.push_front(i);

	cout << "Ms: " << mylist.max_size() << endl;					// The maximum possible size of the list
	cout << "S: " << mylist.size() << endl;							// The actual size of the list

	for_each(mylist.begin(), mylist.end(), show);cout << endl;
	for_each(mylist.rbegin(), mylist.rend(), show);cout << endl;

	mylist.resize(10, 50);											// Make the size of the vector equal to N, and fill it with elements

	cout << "S: " << mylist.size() << endl;

	auto it = mylist.begin();
	advance(it, 5);												// Move of poiner

	mylist.insert(it, 3, 120);										// Inserts elements at a certain position with a shift of the rest

	mylist.push_back(180);											// Insert in back of List
	mylist.push_front(380);											// Insert in front of List

	for_each(mylist.begin(), mylist.end(), show);cout << endl;

	list<int> mylist2;
	mylist2.assign(5, 66);

	mylist.sort(greater<int>());									// Sorting on greater
	cout << "Sort: ";
	for_each(mylist.begin(), mylist.end(), show);cout << endl;
  
	mylist2.merge(mylist);												// Merge and sort
	cout << "Merge: ";
	for_each(mylist2.begin(), mylist2.end(), show);cout << endl;

	ls2.unique();												// Remove duplicate items in a group
	cout << "Unique: ";
	for_each(mylist2.begin(), mylist2.end(), show);cout << endl;
}
