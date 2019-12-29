#include <iostream>
#include <vector>
#include "heapsort/heapsort.h"

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

	heapsort(vec);

	printarr(vec);
	cout << endl;

	return 0;
}
