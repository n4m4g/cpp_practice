#include <iostream>
#include "queue/queue.h"

using namespace std;

int main() {
	Queue q1;
	int option, value;
	do {
		cout << "0. exit()" << endl;
		cout << "1. enqueue()" << endl;
		cout << "2. dequeue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. count()" << endl;
		cout << "6. display()" << endl;
		cout << "7. clear()" << endl;

		cin >> option;

		switch(option) {
			case 0:
				break;
			case 1:
				cout << "value to enqueue: ";
				cin >> value;
				q1.enQueue(value);
				break;
			case 2:
				cout << "dequeue value: " << q1.deQueue() << endl;
				break;
			case 3:
				if(q1.isEmpty()) {
					cout << "queue is empty" << endl;
				} else {
					cout << "queue is not empty" << endl;
				}
				break;
			case 4:
				if(q1.isFull()) {
					cout << "queue is full" << endl;
				} else {
					cout << "queue is not full" << endl;
				}
				break;
			case 5:
				cout << "count of items in queue: " << q1.count() << endl;
				break;
			case 6:
				q1.display();
				break;
			case 7:
				system("clear");
				break;
			default:
				cout << "wrong operation" << endl;
				break;
		}

		q1.ptrStatus();


	} while(option!=0);
}
 
