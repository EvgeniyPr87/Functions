#pragma once
#include"Constant.h"

//функция вычисления суммы элементов массива
template<typename T>
T SumNumbers(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

template<typename T>
T SumNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}


// функция вычисления средн.арифметич. элементов
template<typename T>
double AvgNumbers(T arr[], const int n, int Sum)
{
	return  (double)Sum / n;
}

template<typename T>
double AvgNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS, int Sum)
{
	return  (double)Sum / (ROWS * COLS);
}


// функция нахождения max из элементов
template<typename T>
T MaxNumbers(T arr[], const int n)
{
	T max_number = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)  max_number = arr[i];

	}
	return max_number;
}

template<typename T>
T MaxNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max_number = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max_number)  max_number = arr[i][j];
		}
	}
	return max_number;
}

// функция нахождения min из элементов
template<typename T>
T MinNumbers(T arr[], const int n)
{

	T min_number = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}

template<typename T>
T MinNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min_number = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_number) min_number = arr[i][j];
		}
	}
	return min_number;
}
