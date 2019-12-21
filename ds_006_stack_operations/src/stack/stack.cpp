// stack.cpp
#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack() {
	top = -1;
	for(int i=0; i<5; i++) {
		arr[i] = 0;
	}
}

bool Stack::isEmpty() {
	if(top == -1) {
		return true;
	} else {
		return false;
	}
}

bool Stack::isFull() {
	if(top == 4) {
		return true;
	} else {
		return false;
	}
}

void Stack::push(int val) {
	if(isFull()) {
		cout << "stack overflow" << endl;
	} else {
		top++;
		arr[top] = val;
	}
}

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

int Stack::count() {
	return top+1;
}

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

void Stack::change(int pos, int val) {
	if(pos >=0 && pos <=4) {
		arr[pos] = val;
		cout << "value changed at location " << pos << endl;
	} else {
		cout << "pos out of range" << endl;
	}	
}

void Stack::display() {
	cout << "All values in the stack are " << endl;
	for(int i=4; i>=0; i--) {
		cout << arr[i] << endl;
	}
}

