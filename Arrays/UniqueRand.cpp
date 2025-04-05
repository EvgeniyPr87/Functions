#include "UniqueRand.h"
#include "stdafx.h"
#include "constants .h"

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			
			arr[i][j] = rand() % 100;
		}
	}
}