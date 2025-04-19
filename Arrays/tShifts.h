#pragma once
#include"Constant.h"

//функция смещения массива влево
template<typename T> void ShiftLeft(T arr[], const int n, int shift);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

//функция смещения массива вправо
template<typename T> void ShiftRight(T arr[], const int n, int shift);
