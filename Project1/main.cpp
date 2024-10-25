#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "1251");

	srand(time(NULL));
	int size1 = 5;
	
	int* arr = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	int size2 = size1 + 1;
	int* arr1 = new int[size2];
		for (int i = 0; i < size1; i++)
		{
			arr1[i] = arr[i];
		}
		arr1[size2 - 1] = 777;
		delete[]arr;
	for (int i = 0; i < size2; i++)
	{
		cout << arr1[i] << "\n";
	}
	delete[]arr1;
	return 0;
}