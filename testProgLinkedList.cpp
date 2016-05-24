//This program tests various operation of a linked list
//Hello There Show White Bear Brown Black Green Hat C++ 

#include <iostream>
#include <string>
#include "unorderedLinkedList.h" 

using namespace std;

int main()
{
	unorderedLinkedList<int> list1, list2;
	int str;
	int split;

	cout << "Enter 10 integers." << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> str;
		list1.insertLast(str);
	}

	cout << endl;

	cout << "list1: ";
	list1.print();
	cout << endl;
	cout << "Length of list1: "
		<< list1.length() << endl;

	cout << "Please enter the string you would like to split the list at: " << endl;
	cin >> split;

	list1.divideAt(list2, split);

	cout << "list1: ";
	list1.print();
	cout << endl;

	cout << "list2: ";
	list2.print();
	cout << endl;

	system("pause");

	return 0;
}



