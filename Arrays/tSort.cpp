#include"tSort.h"
#include"Constant.h"

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				T bufer = arr[i];
				arr[i] = arr[j];
				arr[j] = bufer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iteration = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++) {

		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k > i ? 0 : j + 1; l < COLS; l++) {
					iteration++;
					if (arr[k][l] < arr[i][j]) {
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Количество итераций" << " " << iteration << endl;
	cout << "Количество обменов" << " " << exchanges << endl;
}