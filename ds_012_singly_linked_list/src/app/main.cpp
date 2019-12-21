#include <iostream>
#include "node/node.h"
#include "singlylinkedlist/singlylinkedlist.h"

using namespace std;

int main() {
	SinglyLinkedList s;
	int option;
	int key, data, k;

	do {
		cout << endl;
		cout << "0. exit()" << endl;
		cout << "1. appendNode()" << endl;
		cout << "2. prependNode()" << endl;
		cout << "3. insertNodeAfter()" << endl;
		cout << "4. deleteNodeByKey()" << endl;
		cout << "5. updateNodeByKey()" << endl;
		cout << "6. print()" << endl;
		cout << "7. clear screen" << endl;

		cin >> option;
		Node* n1 = new Node();

		switch(option) {
			case 0:
				break;
			case 1:
				cout << "enter the key and data to append: " << endl;
				cin >> key;
				cin >> data;
				n1->key = key;
				n1->data = data;
				s.nodeAppend(n1);
				break;
			case 2:
				cout << "enter the key and data to prepend: " << endl;
				cin >> key;
				cin >> data;
				n1->key = key;
				n1->data = data;
				s.nodePrepend(n1);
				break;
			case 3:
				cout << "enter the key of existing node after which you want to insert this new node: " << endl;
				cin >> k;
				cout << "enter the key and data: " << endl;
				cin >> key;
				cin >> data;
				n1->key = key;
				n1->data = data;
				s.nodeInsertAfter(k, n1);
				break;
			case 4:
				cout << "enter the key of the node to delete: " << endl;
				cin >> key;
				s.nodeDeleteByKey(key);
				break;
			case 5:
				cout << "enter the key and data to update: " << endl;
				cin >> key;
				cin >> data;
				s.nodeUpdate(key, data);
				break;
			case 6:
				s.nodePrint();
				break;
			case 7:
				system("clear");
				break;
			default:
				cout << "wrong option" << endl;
				break;

		}

	} while(option!=0);

	

	return 0;
}
