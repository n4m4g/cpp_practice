#ifndef QUICKSORT_H_ 
#define QUICKSORT_H_

void swap(int* a, int* b);
void quicksort(int arr[], int front, int end);
int partition(int arr[], int front, int end);
void printarr(int arr[], int s);

#endif
