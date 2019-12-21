#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
	private:
		int front;
		int rear;
		int arr[5];
		int itemCount;
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		void enQueue(int value);
		int deQueue();
		int count();
		void display();
		void ptrStatus();
};

#endif
