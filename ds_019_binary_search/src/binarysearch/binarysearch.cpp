#include "binarysearch.h"

/**
 * binary search is one of the interval search,
 * which means searching in sorted data-structure
 * and return index position
 * 
 * input arguments:
 * int arr[]: sorted array
 * int left: first index position, 0
 * int right: last index position, size(arr)-1
 * int x: target value to search
 *
 * return:
 * int: index position, return -1 for not found condition
 */

int binarysearch(int arr[], int left, int right, int x) {
	
	while(left <= right) {
		int mid = left + (right - left) / 2;
		if(arr[mid] == x) {
			return mid;
		} else if(arr[mid] < x) {
			left = mid + 1;
		} else { 
			// condition: arr[mid] > x
			right = mid - 1;
		}
	}
	return -1;
}
