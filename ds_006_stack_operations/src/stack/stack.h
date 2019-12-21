// stack.h
#ifndef STACK_H_
#define STACK_H_

class Stack {
	private:
		// store the index location of 
		// the top value in the stack
		int top;
		int arr[5];
	
	public:
		Stack();
		bool isEmpty();
		bool isFull();
		void push(int val);
		int pop();
		int count();
		int peek(int pos);
		void change(int pos, int val);
		void display();
};

#endif
