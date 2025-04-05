#include "Shift.h"
#include "constants .h"

void ShiftLeft(int arr[], const int n, int shift)
{
	//if (shift < 0) shift += n;
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
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	// Смещение построчное
	/*for (int i = 0; i < ROWS; i++) {
		ShiftLeft(arr[i], COLS, shift);
}*/
	// Смещение сквозное всего массива
	ShiftLeft(arr[0], ROWS * COLS, shift);
}

void ShiftRight(int arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(double arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
	}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	ShiftLeft(arr[0], ROWS * COLS, shift);
}

