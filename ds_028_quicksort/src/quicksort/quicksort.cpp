#include <iostream>
#include "quicksort.h"

using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int arr[], int front, int end) {
	// set last element as pivot
	int pivot = arr[end];
	// i: the index of last element smaller than pivot
	int i = front - 1;
	// go through all elements without last one
	for(int j=front; j<end; j++) {
		if(arr[j]<pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	// swap pivot with arr[i]
	i++;
	swap(&arr[i], &arr[end]);
	return i;
}

void quicksort(int arr[], int front, int end) {
	if(front < end) {
		// find pivot
		// since the elements left to pivot is smaller than pivot,
		// elements right to pivot is bigger than pivot,
		// the pivot is fixed after partition
		int pivot = partition(arr, front, end);
		// left side
		quicksort(arr, front, pivot-1);
		// right side
		quicksort(arr, pivot+1, end);

	}
}

void printarr(int arr[], int s) {
	for(int i=0; i<s; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
