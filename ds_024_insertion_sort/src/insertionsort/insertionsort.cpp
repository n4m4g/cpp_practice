#include <iostream>
#include "insertionsort.h"

using namespace std;

/*
 * insertion sort
 * 
 * 1. pick next element
 * 2. compare with all elements in the sorted sub-list on the left
 * 3. shift all the elements in the sorted sub-list
 *    that is greater than the value to be sorted
 * 4. insert the value
 * 5. repeat until list is sorted
 */


/*
 * 1. pick first 2 elements
 * 2. shift most right element to left to right order position
 * 3. pick first 3 elements
 * 4. shift most right element to left to right order position
 * ....
 */

/*
 * input arguments:
 * int arr[]: unsorted array
 * int s: size of unsorted array
 */

void insertionsort(int arr[], int s) {
	int i, j, key;
	for(i=1; i<s; i++) {
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j]>key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
		printarr(arr, s);
	}
}

void printarr(int arr[], int s) {
	for(int i=0; i<s; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
