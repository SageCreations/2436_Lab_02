//Program to test various operations on a doubly linked list
  
#include <iostream>
#include "doublyLinkedList.h"  
 
using namespace std;  

int main()
{
	doublyLinkedList<int> list;
	doublyLinkedList<int> copiedList;
	doublyLinkedList<int> list3;

    int num;

    cout << "Enter numbers ending with -999" << endl;
    cin >> num;

    while (num != -999) {
        list.insert(num);
        cin >> num;
    }

    cout << endl;

	cout << "List: ";
    list.print();
    cout << endl;
    cout << "Length of the list: " << list.length() << endl;

	cout << "Which one of these would you like to delete?" << endl;
	cout << "Number: ";
	cin  >> num;
	list.deleteNode(num);
	
	cout << "\nList: ";
	list.print();
	cout << endl;
	cout << "Length of the list: " << list.length() << endl;

	// made copyList public just for testing purposes
	copiedList.copyList(list);

	cout << "\nnew list that was copied from original." << endl;
	cout << "List: ";
	copiedList.print();
	cout << endl;

	doublyLinkedList<int> list2 = doublyLinkedList<int>(list);
	cout << "\nUsing the copy constructor to make a list." << endl;
	cout << "List: ";
	list2.print();
	cout << endl;

	list3.operator=(list);
	cout << "\noperator assigning a list." << endl;
	cout << "List: ";
	list3.print();
	cout << endl;

	list3.~doublyLinkedList();
	cout << "\ndestroying the list that was just made with the operator=" << endl;
	cout << "List: ";
	list3.print();
	cout << endl;
	cout << "If nothing is above in 'list: ' then it worked." << endl;

	return 0;
} 
