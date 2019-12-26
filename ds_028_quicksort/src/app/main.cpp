#include <iostream>
#include "quicksort/quicksort.h"

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
	quicksort(arr, 0, len-1);

	cout << "sorted array" << endl;
	for(int i=0; i<5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
