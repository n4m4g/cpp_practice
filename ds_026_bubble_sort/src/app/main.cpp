#include <iostream>
#include "bubblesort/bubblesort.h"

using namespace std;

int main() {
	int arr[5];

	cout << "Enter 5 integers in random order: " << endl;
	for(int i=0; i<5; i++) {
		cin >> arr[i];
	}

	cout << "unsorted array" << endl;
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len);

	cout << "sorted array" << endl;
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
