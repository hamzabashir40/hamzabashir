#include "LinkedList.h"
#include <iostream>
using namespace std;
int main()
{
	list x1;

	x1.createnode(25);
	x1.createnode(50);
	x1.createnode(90);
	x1.createnode(40);
	x1.createnode(55);
    cout << "\n -.-.-.-.-Display Nodes-.-.-.-.- \n";
    x1.display();

	x1.createnode(15);
	cout << "\n -.-.-.-.-Inserting at End-.-.-.-.- \n";
	x1.display();

	x1.insert_start(10);
	cout << "\n -.-.-.-.-Inserting At Start-.-.-.-.- \n";
	x1.display();

	x1.delete_first();
	cout << "\n -.-.-.-.-Deleting at start-.-.-.-.- \n";
	x1.display();

	x1.delete_last();
	cout << "\n -.-.-.-.-Deleting at Last-.-.-.-.- \n";
	x1.display();

	x1.delete_position(4);
	cout << "\n -.-.-.-.-Deleting at position 4-.-.-.-.- \n";
	x1.display();

	x1.insert_position(3, 32);
	cout << " -.-.-.-.-Inserting at position 3-.-.-.-.- \n";
	x1.display();

	system("pause");
	return 0;
}