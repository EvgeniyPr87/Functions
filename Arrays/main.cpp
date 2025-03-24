#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);// функция заполняет массив случайными числами
void Print(int arr[], const int n); //функция вывода на экран
void Sort(int arr[], const int n); //функция сортировки массива
int SumNumbers(int arr[], const int n);
double AvgNumbers(int arr[], const int n, int Sum);
int MaxNumbers(int arr[], const int n);
int MinNumbers(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int shift);
void ShiftRight(int arr[], const int n, int shift);


void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift = 3;

	FillRand(arr,n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	ShiftLeft(arr, n, shift);
	Print(arr, n);
	ShiftRight(arr, n, shift);
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
int SumNumbers(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double AvgNumbers(int arr[], const int n, int Sum)
{
	return Sum /= n;
}
int MaxNumbers(int arr[], const int n)
{
	int min_number = INT_MIN;
	int max_number;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > min_number)  max_number = arr[i]; 
		
	}
	return max_number;
}
int MinNumbers(int arr[], const int n)
{
	int max_number = INT_MAX;
	int min_number;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max_number) min_number = arr[i];
	}
	return min_number;
}
void PrintResult()
{ }
void ShiftLeft(int arr[], const int n, int shift)

{
	for (int i = 0; i < shift; i++) {
		int temp = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}
void ShiftRight(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++) {
		int temp = arr[0];
		for (int j = 0; j < n + 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n-1] = temp;
}
}


