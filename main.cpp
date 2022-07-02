#include "sort.h"

void fillInput(vector<int>& in) {

	in.push_back(1);
	in.push_back(5);
	in.push_back(12);
	in.push_back(6);
	in.push_back(9);
	in.push_back(2);
	in.push_back(0);
	in.push_back(3);
}

int main() {

	vector<int> arr;
	fillInput(arr);
	
	sorting *ob = new bubbleSort();
	ob->array = arr;
	cout << "array input:\t" << ends;
	ob->print_data();
	ob->sort_data();

	cout << "array output:\t" << ends;
	ob->print_data();

	vector<int> arr1;
	fillInput(arr1);

	ob = new insertionSort();
	ob->array = arr;
	cout << "array input:\t" << ends;
	ob->print_data();
	ob->sort_data();

	cout << "array output:\t" << ends;
	ob->print_data();
	return 0;
}