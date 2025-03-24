#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);// функция заполняет массив случайными числами
void Print(int arr[], const int n); //функция вывода на экран
void Sort(int arr[], const int n); //функция сортировки массива


void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr,n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int bufer = arr[i];
				arr[i] = arr[j];
				arr[j] = bufer;
			}
		}
	}
}


