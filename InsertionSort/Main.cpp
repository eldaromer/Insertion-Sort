#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> in) {
	vector<int> temp;
	temp.push_back(in[0]);
	for (int i = 1; i < in.size(); i++) {
		int index = 0;
		while (index < temp.size() && temp[index] < in[i]) {
			index++;
		}

		temp.insert(temp.begin() + index, in[i]);
	}

	return temp;
}

void printVector(vector<int> in) {
	for (int i = 0; i < in.size(); i++) {
		cout << in[i] << endl;
	}
}

vector<int> randomArray(int size) {
	vector<int> temp;
	for (int i = 0; i < size; i++) {
		temp.push_back(rand() % 100);
	}
	return temp;
}

void main() {
	vector<int> toSort = randomArray(10);
	printVector(toSort);


	cout << endl << endl << endl;

	vector<int> sorted = insertionSort(toSort);
	printVector(sorted);

	cin.ignore();
}