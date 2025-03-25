#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);// ������� ��������� ������ ���������� �������
void Print(int arr[], const int n); //������� ������ �� �����
void Sort(int arr[], const int n); //������� ���������� �������
int SumNumbers(int arr[], const int n);//������� ���������� ����� ��������� �������
double AvgNumbers(int arr[], const int n, int Sum);// ������� ���������� �����.���������. ���������
int MaxNumbers(int arr[], const int n);// ������� ���������� max �� ���������
int MinNumbers(int arr[], const int n);// ������� ���������� min �� ���������
void ShiftLeft(int arr[], const int n, int shift);//������� �������� ������� �����
void ShiftRight(int arr[], const int n, int shift);//������� �������� ������� ������


void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int step_1 = 3;

	FillRand(arr,n);
	Print(arr, n);
	Sort(arr, n);

	cout << "��������������� ������: " << endl;
	Print(arr, n);
	cout << "����� ��������� �������: " << SumNumbers(arr, n) << endl;
	cout << "������� ������������� ���������: " << AvgNumbers(arr, n, SumNumbers(arr, n)) << endl;
	cout << "������������ ������� �������: " << MaxNumbers(arr, n) << endl;
	cout << "����������� ������� �������: " << MinNumbers(arr, n) << endl;

	cout << "�������� ��������� ������� �����: " << endl;
	ShiftLeft(arr, n, step_1);
	Print(arr, n);

	cout << "�������� ��������� ������� ������: " << endl;
	ShiftRight(arr, n, step_1);
	Print(arr, n);
	cout << endl << endl;;

	const int SIZE = 8;
	int brr[SIZE];
	int step_2 = 1;

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << "��������������� ������: " << endl;
	Print(brr, SIZE);
	
	cout << "����� ��������� �������: " << SumNumbers(brr, SIZE) << endl;
	cout << "������� ������������� ���������: " << AvgNumbers(brr, SIZE, SumNumbers(brr, SIZE)) << endl;
	cout << "������������ ������� �������: " << MaxNumbers(brr, SIZE) << endl;
	cout << "����������� ������� �������: " << MinNumbers(brr, SIZE) << endl;

	cout << "�������� ��������� ������� �����: " << endl;
	ShiftLeft(brr, SIZE, step_2);
	Print(brr, SIZE);

	cout << "�������� ��������� ������� ������: " << endl;
	ShiftRight(brr, SIZE, step_2);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
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
int SumNumbers(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double AvgNumbers(int arr[], const int n, int Sum)
{
	return  (double)Sum/n;
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
int MinNumbers(int arr[], const int n)
{
	
	int min_number = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number) min_number = arr[i];
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
void ShiftRight(int arr[], const int n, int shift)
{
	if (shift < 0) shift += n;
	for (int i = 0; i < shift; i++) {
		int temp = arr[n-1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
}
}


