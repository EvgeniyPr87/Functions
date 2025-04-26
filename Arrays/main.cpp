#include "stdafx.h"
#include "constant.h"
#include "FillRand.h"
#include "Print.h"
#include "Print.cpp"
#include "tSort.h"
#include "tSort.cpp"
#include "tStatistic.h"
#include "tStatistic.cpp"
#include "tShifts.h"
#include "tShifts.cpp"

void main() {

	setlocale(LC_ALL, "");

	int arr[n];
	int step_1 = 3;

	FillRand(arr, n);
	
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
	cout << endl << endl;

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
	
	int i_arr_2[ROWS][COLS];
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimetr;
	cout << "Сортировка" << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimetr;
	int d = 5;
	
	ShiftLeft(i_arr_2, ROWS, COLS,d);
	cout << "Смещение элементов влево построчно:" << endl;
	Print(i_arr_2, ROWS, COLS);


	cout << delimetr;

	cout<< "Сумма элементов массива: " << SumNumbers(i_arr_2,ROWS,COLS) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(i_arr_2, ROWS, COLS, SumNumbers(i_arr_2, ROWS, COLS)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(i_arr_2, ROWS, COLS)<<  endl;
	cout << "Минимальный элемент массива: "  << MinNumbers(i_arr_2, ROWS, COLS)<< endl;

	cout << delimetr;
	cout << delimetr;

	double d_arr_2[ROWS][COLS];

	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << delimetr;

	cout << delimetr;
	cout << "Сумма элементов массива: " << SumNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(d_arr_2, ROWS, COLS, SumNumbers(d_arr_2, ROWS, COLS)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << delimetr;
}



