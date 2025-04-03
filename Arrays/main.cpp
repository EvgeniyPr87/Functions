#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define MAS_1
//#define MAS_2

#define delimetr "\n-------------------------------------\n"

const int ROWS = 4;
const int COLS = 5;

// функция заполняет массив случайными числами
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

//функция вывода на экран
void Print(int arr[], const int n); 
void Print(double arr[], const int n); 
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

//функция сортировки массива
void Sort(int arr[], const int n); 
void Sort(double arr[], const int n); 
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

//функция вычисления суммы элементов массива
int SumNumbers(int arr[], const int n);
double SumNumbers(double arr[], const int n);
int SumNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double SumNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

// функция вычисления средн.арифметич. элементов
double AvgNumbers(int arr[], const int n, int Sum);
double AvgNumbers(double arr[], const int n, int Sum);
double AvgNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS, int Sum);
double AvgNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS, double Sum);

// функция нахождения max из элементов
int MaxNumbers(int arr[], const int n);
double MaxNumbers(double arr[], const int n);
int MaxNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

// функция нахождения min из элементов
int MinNumbers(int arr[], const int n);
double MinNumbers(double arr[], const int n);
int MinNumbers(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS);

//функция смещения массива влево
void ShiftLeft(int arr[], const int n, int shift);
void ShiftLeft(double arr[], const int n, int shift);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

//функция смещения массива вправо
void ShiftRight(int arr[], const int n, int shift);
void ShiftRight(double arr[], const int n, int shift);


void main() {

	setlocale(LC_ALL, "");

#ifdef MAS_1
	const int n = 5;
	int arr[n];
	int step_1 = 3;

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);

	cout << "Отсортированный массив: " << endl;
	Print(arr, n);
	cout << "Сумма элементов массива: " << SumNumbers(arr, n) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(arr, n, SumNumbers(arr, n)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(arr, n) << endl;

	cout << "Смещение элементов массива влево: " << endl;
	ShiftLeft(arr, n, step_1);
	Print(arr, n);

	cout << "Смещение элементов массива вправо: " << endl;
	ShiftRight(arr, n, step_1);
	Print(arr, n);
	cout << endl << endl;
#endif // MAS_1


#ifdef MAS_2
	const int SIZE = 8;
	double brr[SIZE];
	int step_2 = 1;

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << "Отсортированный массив: " << endl;
	Print(brr, SIZE);

	cout << "Сумма элементов массива: " << SumNumbers(brr, SIZE) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(brr, SIZE, SumNumbers(brr, SIZE)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(brr, SIZE) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(brr, SIZE) << endl;

	cout << "Смещение элементов массива влево: " << endl;
	ShiftLeft(brr, SIZE, step_2);
	Print(brr, SIZE);

	cout << "Смещение элементов массива вправо: " << endl;
	ShiftRight(brr, SIZE, step_2);
	Print(brr, SIZE);
#endif // MAS_2

	cout << delimetr;
	
	int i_arr_2[ROWS][COLS];
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimetr;
	cout << delimetr;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimetr;

	cout<< "Сумма элементов массива: " << SumNumbers(i_arr_2,ROWS,COLS) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(i_arr_2, ROWS, COLS, SumNumbers(i_arr_2, ROWS, COLS)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(i_arr_2, ROWS, COLS)<<  endl;
	cout << "Минимальный элемент массива: "  << MinNumbers(i_arr_2, ROWS, COLS)<< endl;

	cout << delimetr;

	int shift = 3;
	ShiftLeft(i_arr_2, ROWS, COLS, shift);
	Print(i_arr_2, ROWS, COLS);

	cout << delimetr;
	cout << delimetr;

	double d_arr_2[ROWS][COLS];

	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << delimetr;


	cout << delimetr;
	cout << "Сумма элементов массива: " << SumNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << "Средняя арифметическа элементов: " << AvgNumbers(d_arr_2, ROWS, COLS, SumNumbers(d_arr_2, ROWS, COLS)) << endl;
	cout << "Максимальный элемент массива: " << MaxNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << MinNumbers(d_arr_2, ROWS, COLS) << endl;
	cout << delimetr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand()%100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand()%10000;
			arr[i][j] /= 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
	cout << endl;
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int bufer = arr[i];
				arr[i] = arr[j];
				arr[j] = bufer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				double bufer = arr[i];
				arr[i] = arr[j];
				arr[j] = bufer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS-1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < ROWS * COLS; j++) {
			int rows_i = i / COLS;
			int cols_i = i % COLS;

			int rows_j = j / COLS;
			int cols_j = j % COLS;

			int rows_min = minIndex / COLS;
			int cols_min = minIndex % COLS;

			if (arr[rows_i][cols_i] < arr[rows_min][cols_min]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int rows_i = i / COLS;
			int cols_i = i % COLS;
			int rows_min = minIndex / COLS;
			int cols_min = minIndex % COLS;

			int bufer = arr[rows_i][cols_i];
			arr[rows_i][cols_i] = arr[rows_min][cols_min];
			arr[rows_min][cols_min] = bufer;
		}
	}
}

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
	return  (double)Sum/n;
}
double AvgNumbers(double arr[], const int n, int Sum)
{
	return  (double)Sum / n;
}
double AvgNumbers(int arr[ROWS][COLS],const int ROWS, const int COLS, int Sum)
{ 
	return  (double)Sum / (ROWS * COLS);
}
double AvgNumbers(double arr[ROWS][COLS], const int ROWS, const int COLS, double Sum)
{
	return  Sum / (ROWS * COLS);
}

int MaxNumbers(int arr[], const int n)
{ 
	int max_number = INT_MIN;
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
	int max_number =arr[0][0];
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
	
	int min_number = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
	}
	return min_number;
}
double MinNumbers(double arr[], const int n)
{

	double min_number = INT_MAX;
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

void ShiftLeft(int arr[], const int n, int shift)
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
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS,int shift)
{
	if (shift < 0) shift += ROWS;
	for (int i = 0; i < shift; i++) {
		int temp = arr[0][0];
		for (int j = 0; j < ROWS - 1; j++) {
			arr[i][j] = arr[i][j + 1];
		}
		arr[i][ROWS - 1] = temp;
	}
}

void ShiftRight(int arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		double temp = arr[n-1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
}
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



