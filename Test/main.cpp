#pragma once
#include<iostream>

using namespace std;//Никогда нельзя выносить в заголовочные фалы
using std::cout;
using std::cin;
using std::endl;


void main(){
	setlocale(LC_ALL, "");
	cout << " Массив уникальных элементов" << endl;
	const int n =12;
	int arr[n]{};
	/*int minRand = 5;
	int maxRand = 100;*/
	for (int i = 0; i < n; i++) {
		bool isRepeat;
		int buffer = rand() % 100;
		for (int j = 0; j < i; j++) {
			if (arr[j] == buffer) {
				isRepeat = true;
				break;
			}
		}
		if (isRepeat = false) {
			arr[i] = buffer;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}cout << endl;
}
