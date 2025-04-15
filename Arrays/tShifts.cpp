#include"tShifts.h"
#include"Constant.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++) {
		T temp = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}

template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	/*for (int i = 0; i < ROWS; i++) {
		ShiftLeft(arr[i], COLS, shift);
}*/
	ShiftLeft(arr[0], ROWS * COLS, shift);
}


template<typename T>
void ShiftRight(T arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}