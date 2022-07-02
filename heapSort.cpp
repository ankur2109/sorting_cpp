#include "sort.h"

void heapSort :: heapify(int size, int idx) {
	int large = idx;
	int l = 2 * idx + 1;
	int r = 2 * idx + 2;

	if (l < size && array[l] > array[large])
		large = l;
	if (r < size && array[r] > array[large])
		large = r;
	if (large != idx) {
		int temp = array[large];
		array[large] = array[idx];
		array[idx] = temp;
		heapify(size, large);
 	}
}

void heapSort::sort_data() {
	for (int i = array.size() / 2; i >= 0; i--) {
		heapify(array.size(), i);
	}

	for (int i = array.size()-1; i >= 0; i--) {
		int temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		heapify(i, 0);
	}
}
