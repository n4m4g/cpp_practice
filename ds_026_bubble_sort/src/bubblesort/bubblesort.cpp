#include <iostream>
#include "bubblesort.h"

using namespace std;

/*
 * bubble sort
 * 
 * 1. pick next element
 * 2. compare with all elements in the sorted sub-list on the left
 * 3. shift all the elements in the sorted sub-list
 *    that is greater than the value to be sorted
 * 4. insert the value
 * 5. repeat until list is sorted
 */

/*
 * input arguments:
 * int arr[]: unsorted array
 * int s: size of unsorted array
 */

void bubblesort(int arr[], int s) {
	for(int i=0; i<s-1; i++) {
		int flag = false;
		for(int j=0; j<s-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				flag = true;
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		if(!flag) {
			break;
		}
		printarr(arr, s);
	}
}

void printarr(int arr[], int s) {
	for(int i=0; i<s; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
