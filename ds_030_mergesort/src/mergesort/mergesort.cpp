#include <iostream>
#include <vector>
#include <climits>
#include "mergesort.h"

using namespace std;

void merge(vector<int>& vec, int front, int mid, int end) {
	// copy vec[front~mid], vec[mid+1~end]
	vector<int> lvec(vec.begin()+front, vec.begin()+mid+1);
	vector<int> rvec(vec.begin()+mid+1, vec.begin()+end+1);
	// insert MAX at the end of vec
	lvec.insert(lvec.end(), INT_MAX);
	rvec.insert(rvec.end(), INT_MAX);

	int lidx = 0, ridx = 0;
	for(int i=front; i<=end; i++) {
		if(lvec[lidx] <= rvec[ridx]) {
			vec[i] = lvec[lidx++];
		} else {
			vec[i] = rvec[ridx++];
		}
	}
}

void mergesort(vector<int>& vec, int front, int end) {
	if(front < end) {
		int mid = (front + end) / 2;
		mergesort(vec, front, mid);
		mergesort(vec, mid+1, end);
		merge(vec, front, mid, end);
	}
}

void printarr(vector<int>& vec) {
	vector<int>::iterator it;
	for(it=vec.begin(); it!=vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
