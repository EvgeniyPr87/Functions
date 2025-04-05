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
	/*for (int i = 0; i < ROWS; i++) {
		ShiftLeft(arr[i], COLS, shift);
}*/

	ShiftLeft(arr[0], ROWS * COLS, shift);
}
//void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
//{
//
//}


void ShiftRight(int arr[], const int n, int shift)
{
	/*if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		double temp = arr[n-1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;*/
	ShiftLeft(arr, n, n - shift);

}
void ShiftRight(double arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		double temp = arr[n - 1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}
//void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
//void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
