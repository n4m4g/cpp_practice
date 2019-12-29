#include <iostream>
#include <vector>
#include "heapsort.h"

using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// top down
void maxHeapify(vector<int>& vec, int root, int len) {
	int l = root * 2, r = root * 2 + 1, largest;
	
	if(l <= len && vec[l] > vec[root]) {
		largest = l;
	} else {
		largest = root;
	}
	if(r <= len && vec[r] > vec[largest]) {
		largest = r;
	}
	if(largest != root) {
		swap(vec[largest], vec[root]);
		maxHeapify(vec, largest, len);
	}
}

// bottom up
void buildMaxHeap(vector<int>& vec) {
	// start from last root(has children)
	for(int i=(int)vec.size()/2; i>=1; i--) {
		maxHeapify(vec, i, (int)vec.size()-1);
	}
}

void heapsort(vector<int>& vec) {
	// set index of first value to 1
	vec.insert(vec.begin(), 0);
	// vec to max heap, let root value be largest value
	buildMaxHeap(vec);
	int size = vec.size()-1;
	// start from last index to index=2
	for(int i=size; i>=2; i--) {
		swap(vec[1], vec[i]);
		// after swap, vec[i] will be the largest value
		size--;
		maxHeapify(vec, 1, size);
	}
	vec.erase(vec.begin());
}

void printarr(vector<int>& vec) {
	vector<int>::iterator it;
	for(it=vec.begin(); it!=vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
