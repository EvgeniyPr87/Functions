#pragma once
#include"Constant.h"

//������� ���������� ����� ��������� �������
template<typename T>
T SumNumbers(T arr[], const int n);

template<typename T>
T SumNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);


// ������� ���������� �����.���������. ���������
template<typename T>
double AvgNumbers(T arr[], const int n, int Sum);

template<typename T>
double AvgNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS, int Sum);


// ������� ���������� max �� ���������
template<typename T>
T MaxNumbers(T arr[], const int n);

template<typename T>
T MaxNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);

// ������� ���������� min �� ���������
template<typename T>
T MinNumbers(T arr[], const int n);
template<typename T>
T MinNumbers(T arr[ROWS][COLS], const int ROWS, const int COLS);
