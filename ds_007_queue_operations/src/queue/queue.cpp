#include <iostream>
#include "queue.h"

using namespace std;

// constructor
Queue::Queue() {
	itemCount = 0;
	front = -1;
	rear = -1;
	for(int i=0; i<5; i++) {
		arr[i] = 0;
	}
}

// check whether the queue is empty
bool Queue::isEmpty() {
	if(itemCount==0) {
		return true;
	} else {
		return false;
	}
}

// check whether the queue is full
bool Queue::isFull() {
	if((rear+1)%5==front) {
		return true;
	} else {
		return false;
	}
}

// put value in queue
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

// get value from queue
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

// get item count in queue
int Queue::count() {
	// return rear-front+1;
	return itemCount;
}

// show value in queue
void Queue::display() {
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// show ptr: front, rear
void Queue::ptrStatus() {
	cout << "front: " << front << ", rear: " << rear << endl;
}

// deconstructor
Queue::~Queue() {}

