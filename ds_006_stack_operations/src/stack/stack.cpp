// stack.cpp
#include <iostream>
#include "stack.h"

using namespace std;

// constructor
Stack::Stack() {
	top = -1;
	for(int i=0; i<5; i++) {
		arr[i] = 0;
	}
}

// check whether the stack is empty
bool Stack::isEmpty() {
	if(top == -1) {
		return true;
	} else {
		return false;
	}
}

// check whether the stack is full
bool Stack::isFull() {
	if(top == 4) {
		return true;
	} else {
		return false;
	}
}

// push value to stack
void Stack::push(int val) {
	if(isFull()) {
		cout << "stack overflow" << endl;
	} else {
		top++;
		arr[top] = val;
	}
}

// pop value from stack
int Stack::pop() {
	if(isEmpty()) {
		cout << "stack underflow" << endl;
		return 0;
	} else {
		int popValue = arr[top];
		arr[top] = 0;
		top--;
		return popValue;
	}
}

// count item in the stack
int Stack::count() {
	return top+1;
}

// check value at certain position
int Stack::peek(int pos) {
	if(isEmpty()) {
		cout << "stack is underflow" << endl;
		return 0;
	} else if(pos >=0 && pos <=4){
		return arr[pos];
	} else {
		cout << "pos out of range" << endl;
		return 0;
	}
}

// change the value in the stack by position
void Stack::change(int pos, int val) {
	if(pos >=0 && pos <=4) {
		arr[pos] = val;
		cout << "value changed at location " << pos << endl;
	} else {
		cout << "pos out of range" << endl;
	}	
}

// show value in stack
void Stack::display() {
	cout << "All values in the stack are " << endl;
	for(int i=4; i>=0; i--) {
		cout << arr[i] << endl;
	}
}

// deconstructor
Stack::~Stack() {}

