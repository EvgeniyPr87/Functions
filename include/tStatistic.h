#pragma once
#include"constant.h"

//функция вычисления суммы элементов массива
template<typename T> T SumNumbers(T arr[], const int n);
template<typename T> T SumNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);

// функция вычисления средн.арифметич. элементов
template<typename T> double AvgNumbers(T arr[], const int n, int Sum);
template<typename T> double AvgNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS, int Sum);

// функция нахождения max из элементов
template<typename T> T MaxNumbers(T arr[], const int n);
template<typename T> T MaxNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);

// функция нахождения min из элементов
template<typename T> T MinNumbers(T arr[], const int n);
template<typename T> T MinNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);
