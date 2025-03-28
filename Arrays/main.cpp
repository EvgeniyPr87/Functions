﻿#include<iostream>
using namespace std;
#define delimetr "\n------------------------------\n"

const int ROWS = 4;
const int COLS = 5;

void FillRand(int arr[], const int n);// функция заполняет массив случайными числами
void FillRand(double arr[], const int n);// функция заполняет массив случайными числами
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n); //функция вывода на экран
void Print(double arr[], const int n); //функция вывода на экран
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n); //функция сортировки массива
void Sort(double arr[], const int n); //функция сортировки массива

int SumNumbers(int arr[], const int n);//функция вычисления суммы элементов массива
double SumNumbers(double arr[], const int n);//функция вычисления суммы элементов массива

double AvgNumbers(int arr[], const int n, int Sum);// функция вычисления средн.арифметич. элементов
double AvgNumbers(double arr[], const int n, int Sum);// функция вычисления средн.арифметич. элементов

int MaxNumbers(int arr[], const int n);// функция нахождения max из элементов
double MaxNumbers(double arr[], const int n);// функция нахождения max из элементов

int MinNumbers(int arr[], const int n);// функция нахождения min из элементов
double MinNumbers(double arr[], const int n);// функция нахождения min из элементов

void ShiftLeft(int arr[], const int n, int shift);//функция смещения массива влево
void ShiftLeft(double arr[], const int n, int shift);//функция смещения массива влево

void ShiftRight(int arr[], const int n, int shift);//функция смещения массива вправо
void ShiftRight(double arr[], const int n, int shift);//функция смещения массива вправо


void main() {

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int step_1 = 3;

	FillRand(arr,n);
	Print(arr, n);
	Sort(arr, n);

	cout << "Отсортированный массив: " << endl;
	Print(arr, n);
	cout << "Сумма элементов массива: " << SumNumbers(arr, n) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(arr, n, SumNumbers(arr, n)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(arr, n) << endl;

	cout << "Смещение элементов массива влево: " << endl;
	ShiftLeft(arr, n, step_1);
	Print(arr, n);

	cout << "Смещение элементов массива вправо: " << endl;
	ShiftRight(arr, n, step_1);
	Print(arr, n);
	cout << endl << endl;;

	const int SIZE = 8;
	double brr[SIZE];
	int step_2 = 1;

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << "Отсортированный массив: " << endl;
	Print(brr, SIZE);
	
	cout << "Сумма элементов массива: " << SumNumbers(brr, SIZE) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(brr, SIZE, SumNumbers(brr, SIZE)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(brr, SIZE) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(brr, SIZE) << endl;

	cout << "Смещение элементов массива влево: " << endl;
	ShiftLeft(brr, SIZE, step_2);
	Print(brr, SIZE);

	cout << "Смещение элементов массива вправо: " << endl;
	ShiftRight(brr, SIZE, step_2);
	Print(brr, SIZE);
	cout << delimetr;
	// Объявление двумерного массива
	
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{15,6,18},
		{3,5,8},
	};
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	/*for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			cout << i_arr_2[i][j]<<"\t";
		}cout << endl;
	}*/
	


}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand();
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << "\t";
		}cout << endl;
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
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				double bufer = arr[i];
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
double SumNumbers(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

double AvgNumbers(int arr[], const int n, int Sum)
{
	return  (double)Sum/n;
}
double AvgNumbers(double arr[], const int n, int Sum)
{
	return  (double)Sum / n;
}

int MaxNumbers(int arr[], const int n)
{ 
	int max_number = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)  max_number = arr[i];
		
	}
	return max_number;
}
double MaxNumbers(double arr[], const int n)
{
	double max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)  max_number = arr[i];

	}
	return max_number;
}

int MinNumbers(int arr[], const int n)
{
	
	int min_number = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}
double MinNumbers(double arr[], const int n)
{

	double min_number = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}

void ShiftLeft(int arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		int temp = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}
void ShiftLeft(double arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
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
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		double temp = arr[n-1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
}
}
void ShiftRight(double arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		double temp = arr[n - 1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}



