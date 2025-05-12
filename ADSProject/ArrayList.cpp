#include "ArrayList.h"
ArrayList::ArrayList() {
	size = 0;
	array = nullptr;
}

ArrayList::~ArrayList() {
	if (array != nullptr) {
		delete[] array ;
	}
}

void ArrayList::add(int value) {
	if (array != nullptr) {
		int* newArray = new int[size + 1];

		for (int i = 0; i < size; i++) {
			newArray[i] = array[i];
			delete[] array;
			array = newArray; 
			size++;
		}
	}
	else {
		array = new int[1];
		array[0] = value;
		size++;
	}
}

void ArrayList::add(int value, int index) {
	if (index >= 0 && index < size && array != nullptr) {
		size++;
		int* newArray = new int[size + 1];

		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				newArray[i] = array[j++];
			}

			else {
				newArray[i] = value;
			}
			delete[] array;
			array = newArray;
		}
}

	void ArrayList::addAll(int* values, int size, int index) {
		if (array == nullptr || size < 0) {

		}
	}
