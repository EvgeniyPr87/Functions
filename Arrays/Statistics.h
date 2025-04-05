#pragma once
#include "constants .h"

//������� ���������� ����� ��������� �������
int SumNumbers(int arr[], const int n);
double SumNumbers(double arr[], const int n);
int SumNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double SumNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

// ������� ���������� �����.���������. ���������
double AvgNumbers(int arr[], const int n, int Sum);
double AvgNumbers(double arr[], const int n, int Sum);
double AvgNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS, int Sum);
double AvgNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS, double Sum);

// ������� ���������� max �� ���������
int MaxNumbers(int arr[], const int n);
double MaxNumbers(double arr[], const int n);
int MaxNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

// ������� ���������� min �� ���������
int MinNumbers(int arr[], const int n);
double MinNumbers(double arr[], const int n);
int MinNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

