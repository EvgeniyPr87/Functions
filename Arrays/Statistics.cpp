#include "Statistics.h"
#include "constants .h"

int SumNumbers(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double SumNumbers(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
int SumNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}
double SumNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}


double AvgNumbers(int arr[], const int n, int Sum)
{
	return  (double)Sum / n;
}
double AvgNumbers(double arr[], const int n, int Sum)
{
	return  (double)Sum / n;
}
double AvgNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS, int Sum)
{
	return  (double)Sum / (ROWS * COLS);
}
double AvgNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS, double Sum)
{
	return  Sum / (ROWS * COLS);
}

int MaxNumbers(int arr[], const int n)
{
	int max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)  max_number = arr[i];

	}
	return max_number;
}
double MaxNumbers(double arr[], const int n)
{
	double max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)  max_number = arr[i];

	}
	return max_number;
}
int MaxNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max_number = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max_number)  max_number = arr[i][j];
		}
	}
	return max_number;
}
double MaxNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max_number = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max_number)  max_number = arr[i][j];
		}
	}
	return max_number;
}

int MinNumbers(int arr[], const int n)
{

	int min_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}
double MinNumbers(double arr[], const int n)
{

	double min_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}
int MinNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min_number = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_number) min_number = arr[i][j];
		}
	}
	return min_number;
}
double MinNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min_number = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_number) min_number = arr[i][j];
		}
	}
	return min_number;
}
