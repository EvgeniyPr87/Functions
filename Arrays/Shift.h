#pragma once
#include "constants .h"

//������� �������� ������� �����
void ShiftLeft(int arr[], const int n, int shift);
void ShiftLeft(double arr[], const int n, int shift);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
//void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
//void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

//������� �������� ������� ������
void ShiftRight(int arr[], const int n, int shift);
void ShiftRight(double arr[], const int n, int shift);
//void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
//void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);