#include "UniqueRand.h"
#include "stdafx.h"
#include "constants .h"

void UniqueRand(int arr[], const int n, int minRand, int maxRand)
{
	bool isRepeat=false;
	for (int i = 0; i < n; i++) {
		int buffer = rand()%(maxRand-minRand)+minRand;
		for (int j = 0; j < i; j++) {
			if (arr[j] == buffer) {
				isRepeat = true;
				break; 
			}
		}
		if (false)  arr[i] = buffer;	
	}
}

	void UniqueRand(double arr[], const int n)
	{
		for (int i = 0; i < n; i++) {
			bool isRepeat = false;
			double buffer = rand() % 10000;
			buffer /=100;
			for (int j = 0; j < i; j++) {
				if (arr[j] == buffer) {
					isRepeat = true;
					break;
				}
			}
			if (false) arr[i] = buffer;
		}
	}
	

//void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{

//}