#include <iostream>
#include "Header.h"
#include "Header.cpp"
#include <string>

#include "Lab 1-11.cpp"

int main()
{

	using namespace std;
	//create mylist
	List<char> mylist;
	//---------comment close last assigment here-------------
	////push to head 
	//mylist.headPush(5);
	//mylist.headPush(4);
	//mylist.headPush(3);
	////display 
	//mylist.display();
	////push tp tail 
	//mylist.tailPush(6);
	//mylist.tailPush(7);
	////display 
	//mylist.display();
	////pop head
	//cout << "This integer is pop: " << mylist.headPop() << endl;
	////mylist.headPop();

	//mylist.display();
	////pop tail
	//cout << "This integer is pop: " << mylist.tailPop() << endl;
	////mylist.tailPop();
	//mylist.display();

	////delete element
	//mylist.deleteNode(7);
	//mylist.display();
	////check is in a list
	//if (mylist.isInList(4) == true) {
	//	cout << "It is in a List" << endl;
	//}
	//else {
	//	cout << "It 's not in a List" << endl;
	//}
	//------------close here--------------
	mylist.headPush('a');
	mylist.headPush('b');
	mylist.headPush('e');
	mylist.tailPush('a');
	mylist.tailPush('d');
	mylist.tailPush('e');
	mylist.tailPush('c');
	mylist.display();
	mylist.unique();
	mylist.sort();
	//mylist.deleteNode(3);
	//mylist.deleteNode(3);
	mylist.display();


	return 0;
}