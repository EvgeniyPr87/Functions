#pragma once
#include"Constant.h"

//������� �������� ������� �����
template<typename T>
void ShiftLeft(T arr[], const int n, int shift);

template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

//������� �������� ������� ������
template<typename T>
void ShiftRight(T arr[], const int n, int shift);
