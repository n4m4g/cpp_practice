#include <iostream>

using namespace std;

class Stack {
	private:
		// store the index location of 
		// the top value in the stack
		int top;
		int arr[5];
	
	public:
		Stack() {
			top = -1;
			for(int i=0; i<5; i++) {
				arr[i] = 0;
			}
		}

		bool isEmpty() {
			if(top == -1) {
				return true;
			} else {
				return false;
			}
		}

		bool isFull() {
			if(top == 4) {
				return true;
			} else {
				return false;
			}
		}

		void push(int val) {
			if(isFull()) {
				cout << "stack overflow" << endl;
			} else {
				top++;
				arr[top] = val;
			}
		}

		int pop() {
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

		int count() {
			return top+1;
		}

		int peek(int pos) {
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

		void change(int pos, int val) {
			if(pos >=0 && pos <=4) {
				arr[pos] = val;
				cout << "value changed at location " << pos << endl;
			} else {
				cout << "pos out of range" << endl;
			}	
		}

		void display() {
			cout << "All values in the stack are " << endl;
			for(int i=4; i>=0; i--) {
				cout << arr[i] << endl;
			}
		}

};

int main() {
	Stack s1;
	int option, position, value;

	do {
		cout << endl;
		cout << "0. exit()" << endl;
		cout << "1. Push()" << endl;
		cout << "2. Pop()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. peek()" << endl;
		cout << "6. count()" << endl;
		cout << "7. change()" << endl;
		cout << "8. display()" << endl;
		cout << "9. Clear Screen" << endl << endl;

		cin >> option;
		switch(option) {
			case 0:
				break;
			case 1:
				cout << "value to push in the stack: ";
				cin >> value;
				s1.push(value);
				break;
			case 2:
				cout << "Poped value: " << s1.pop() << endl;
				break;
			case 3:
				if(s1.isEmpty()) {
					cout << "stack is empty" << endl;
				} else {
					cout << "stack is not empty" << endl;
				}
				break;
			case 4:
				if(s1.isFull()) {
					cout << "stack is full" << endl;
				} else {
					cout << "stack is not full" << endl;
				}
				break;
			case 5:
				cout << "pos to peek: ";
				cin >> position;
				cout << "Peek " << s1.peek(position) << endl;
				break;
			case 6:
				cout << "Number of items in the stack are: " << s1.count() << endl;
				break;
			case 7:
				cout << "pos to change: ";
				cin >> position;
				cout << "val to change: ";
				cin >> value;
				s1.change(position, value);
				break;
			case 8:
				s1.display();
				break;
			case 9:
				system("clear");
				break;
			default:
				cout << "Wrong option number!" << endl;
		}

	} while(option != 0);


	return 0;
}
