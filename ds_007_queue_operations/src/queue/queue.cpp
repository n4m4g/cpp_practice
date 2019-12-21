#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue() {
	itemCount = 0;
	front = -1;
	rear = -1;
	for(int i=0; i<5; i++) {
		arr[i] = 0;
	}
}

bool Queue::isEmpty() {
	if(itemCount==0) {
		return true;
	} else {
		return false;
	}
}

bool Queue::isFull() {
	if((rear+1)%5==front) {
		return true;
	} else {
		return false;
	}
}

void Queue::enQueue(int value) {
	if(isFull()) {
		cout << "Queue is full" << endl;
		return;
	} else if(isEmpty()) {
		rear = 0;
		front = 0;
	} else {
		rear = (rear+1)%5;
	}
	arr[rear] = value;
	itemCount++;
}

int Queue::deQueue() {
	int x = 0;
	if(isEmpty()) {
		cout << "Queue is empty" << endl;
	} else if(front==rear) {
		x = arr[front];
		arr[front] = 0;
		front--;
		rear--;
		itemCount--;
	} else {
		x = arr[front];
		arr[front] = 0;
		front = (front+1)%5;
		itemCount--;
	}
	return x;
}

int Queue::count() {
	// return rear-front+1;
	return itemCount;
}

void Queue::display() {
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Queue::ptrStatus() {
	cout << "front: " << front << ", rear: " << rear << endl;
}
