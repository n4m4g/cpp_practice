#include <iostream>
#include "binarysearch/binarysearch.h"

using namespace std;

int main() {
	int num;
	int arr[10];
	int output;

	cout << "Enter 10 integers in ASCENDING order: " << endl;
	for(int i=0; i<10; i++) {
		cin >> arr[i];
	}

	cout << "Enter one number to search in the array: ";
	cin >> num;

	output = binarysearch(arr, 0, 9, num);

	if(output == -1) {
		cout << "No match found" << endl;
	} else {
		cout << "Match found at Index Position: " << output << endl;
	}
	return 0;
}
