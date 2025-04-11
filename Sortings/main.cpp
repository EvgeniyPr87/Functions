#include<iostream>
#include<ctime>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define delimetr "--------------------------------------------------------------------"

void Print(int arr[], const int n);

//void SortInsert(int arr[], const int n);

void main() {
	srand(time(NULL));
	setlocale(LC_ALL, "");
	
	
	/*int n = 8;
	int i_arr[] = { 5,3,7,0,4,1,6,2 };
	SortInsert(i_arr, n);
	for (int i = 0; i < n; i++) {
		cout << i_arr[i] << "\t";
	}cout << endl;


}
void SortInsert(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		for (int a = 1; a < n; a++)
		{
			for (int j = a - 1; j < n; j++) {
				if (arr[a] < arr[j]) {
					int buffer = arr[a];
					arr[a] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}*/
	
	const int n = 9;
	int arr[n] = {};

	Print(arr, n);

	cout << delimetr;
		cout << endl;

		for (int i = 0; i < n; i++) {
			arr[i] = rand() % 100;
	}
		//Print(arr, n);
		cout << delimetr;
		cout << endl;

		

		for (int i = 0; i < n; i++) {
			bool isRepeat;
			int buffer = rand() % 100;
			for (int j = 0; j < i; j++) {
				if (arr[j] == buffer) {
					isRepeat = true;
					break;
				}	
			}
			if (isRepeat = false) {
				arr[i] = buffer;
			}
			
		}
		Print(arr, n);
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}cout << endl;
}
