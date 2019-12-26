#include <iostream>
#include "selectionsort.h"

using namespace std;

/*
 * void getArraySize(int arr[]){
 * int len = (sizeof(arr)/sizeof(arr[0])
 * printf("Array Length:%d\n",len);
 * }
 *
 * When you pass an array to a function, 
 * it decays into a pointer to the first element, 
 * at which point knowledge of its size is lost.
 * If you want to know the size of an array passed to the function, 
 * you need to work it out before decay and pass that information with the array
 */

/*
 * When you pass an array to a function it decays to pointer. 
 * So the sizeof function will return the size of int *. 
 * This is the warning that your compiler complining about-
 * 
 * sizeof on array function parameter will return size of 'int *' instead of 'int []'
 */

/*
 * Selection sort proceeds by finding the smallest or largest element
 * in the unsorted sublist, exchanging it with the leftmost unsorted element
 * and moving the sublist boundaries one element to the right
 *
 * Initially, the sorted sublist is empty
 * and the unsorted sublist is the entire iput list.
 */

/*
 * 1. pick first element
 * 2. swap with most smallest element in right side
 * 3. pick second element
 * 4. swap with most smallest element in right side
 * ....
 */

/*
 * input arguments:
 * int arr[]: unsorted array
 * int s: size of unsorted array
 */

void selectionsort(int arr[], int s) {
	for(int i=0; i<s-1; i++) {
		int min = i;
		for(int j=i+1;j<s;j++) {
			if(arr[min]>arr[j]) {
				min = j;
			}
		}

		if(min != i) {
			int tmp = arr[min];
			arr[min] = arr[i];
			arr[i] = tmp;
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
