#ifndef MERGESORT_H_ 
#define MERGESORT_H_
#include <vector>

using namespace std;

void swap(int& a, int& b);
void maxHeapify(vector<int>& vec, int root, int len);
void buildMaxHeap(vector<int>& vec);
void heapsort(vector<int>& vec);
void printarr(vector<int>& vec);

#endif
