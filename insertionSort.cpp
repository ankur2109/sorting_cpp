#include "sort.h"

void insertionSort::sort_data() {

	for (int i = 0; i < array.size(); i++) {
		for (int j = i + 1; j < array.size(); j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}