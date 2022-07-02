#include "sort.h"

void bubbleSort::sort_data() {

	for (int i = 0; i < array.size(); i++) {
		bool swap = false;
		for (int j = i + 1; j < array.size(); j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				swap = true;
			}
		}
		if (!swap) return;
	}
}