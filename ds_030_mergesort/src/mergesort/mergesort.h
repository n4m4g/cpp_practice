#ifndef MERGESORT_H_ 
#define MERGESORT_H_
#include <vector>

using namespace std;

void merge(vector<int>& vec, int front, int mid, int end);
void mergesort(vector<int>& vec, int front, int end);
void printarr(vector<int>& vec);

#endif
