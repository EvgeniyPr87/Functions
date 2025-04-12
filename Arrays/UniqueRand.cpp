#include "UniqueRand.h"
#include "stdafx.h"
#include "constants .h"

void UniqueRand(int arr[], const int n, int minRand, int maxRand)
{
	bool isRepeat=false;
	for (int i = 0; i < n;) {
		arr[i]= rand() % (maxRand - minRand) + minRand;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				isRepeat = true;
				break; 
			}
		}
		if (isRepeat==false)   i++;
	}
}

	void UniqueRand(double arr[], const int n)
	{
		for (int i = 0; i < n; ) {
			bool isRepeat = false;
			arr[i] = rand() % 10000;
			arr[i] /=100;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j]) {
					isRepeat = true;
					break;
				}
			}
			if (isRepeat==false) i++;
		}
	}
	

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; ) {
			bool isRepeat = false;
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			for (int k = 0; k < i; k++) {
				for (int l = 0; l < j; l++) {
					if (arr[i][j] == arr[k][l]) {
						isRepeat = true;
						break;
					}
				}
			}
			if (isRepeat == false) j++;
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; ) {
			bool isRepeat = false;
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
			for (int k = 0; k < ROWS; k++) {
				for (int l = 0; l < COLS; l++) {
					if (arr[i][j] == arr[k][l]) {
						isRepeat = true;
						break;
					}
				}
			}
			if (isRepeat == false) j++;
		}
		}
}