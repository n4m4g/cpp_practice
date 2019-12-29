#include <iostream>
#include <vector>
#include "mergesort/mergesort.h"

using namespace std;

int main() {
	int arr[6];

	cout << "Enter 6 integers in random order: " << endl;
	for(int i=0; i<6; i++) {
		cin >> arr[i];
	}

	int len = sizeof(arr) / sizeof(arr[0]);
	vector<int> vec(arr, arr+len);

	printarr(vec);
	cout << endl;

	mergesort(vec, 0, len-1);

	printarr(vec);
	cout << endl;

	return 0;
}
