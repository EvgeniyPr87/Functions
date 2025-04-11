#include "stdafx.h"
#include "constants .h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shift.h"
#include "UniqueRand.h"

//#include "FillRand.cpp" //Реализации функции не подключаются к  месту вызова

void main() {

	setlocale(LC_ALL, "");
	srand(time(NULL));
	int arr[n];
	int step_1 = 3;

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);

	cout << "Отсортированный массив: " << endl;
	Print(arr, n);
	cout << endl;

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

	cout << "Уникальные элементы :" << endl;
	int i_arr[n]{};
	UniqueRand(i_arr, n);
	Print(i_arr, n);

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
	
	int i_arr_2[ROWS][COLS] = {};
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << " Уникальные элементы: " << endl;
	int i_arr_2d[ROWS][COLS];
	//UniqueRand(i_arr_2d, ROWS, COLS);
	//Print(i_arr_2d, ROWS, COLS);

	cout << delimetr;
	cout << "Сортировка" << endl << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimetr;
	int d=5;
	
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

	cout << "Массив уникальных элементов" << endl;
	int iRandomArr[SIZE_2]{};
	Print(iRandomArr, SIZE_2);
	
	cout << endl;
	cout << delimetr;
	UniqueRand(iRandomArr, SIZE_2, 0,100);
	Print(iRandomArr, SIZE_2);
	
	cout << endl;
	cout << delimetr;
	double dRandomArr[SIZE_2]{};
	UniqueRand(dRandomArr, SIZE_2);
	Print(dRandomArr, SIZE_2);


}
