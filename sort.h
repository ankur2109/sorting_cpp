#pragma once

#include <iostream>
#include <vector>

using namespace std;

class sorting {

public:
	vector <int> array;

	sorting() = default;
	
	void read_data(vector<int>& in) {
		array = in;
	}

	void print_data() {
		for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
			cout << *iter << " " << ends;
		}
		cout << endl;
	}

	virtual void sort_data() = 0;
};

class bubbleSort:public sorting {

public:
	void sort_data();
};

class insertionSort :public sorting {

public:
	void sort_data();
};

class heapSort :public sorting {

public:
	void heapify(int size, int idx);
	void sort_data();
};