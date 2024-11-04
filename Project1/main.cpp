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
	
	int*** arr = new int** [size1];
		for (int i = 0; i < size1; i++)
		{
			arr[i] = new int* [size1];
			
			for (int y = 0; y < size1; y++) {
				arr[i][y] = new int[size1];
			}
		}
		for (int i = 0; i < size1; i++)
		{
			for (int z = 0; z < size1; z++)
			{
				for (int x = 0; x < size1; x++)
				{
					arr[i][z][x] = rand() % 10 + 1;
				}
			}
		}

		for (int i = 0; i < size1; i++)
		{
			for (int z = 0; z < size1; z++)
			{
				for (int x = 0; x < size1; x++)
				{
					cout << arr[i][z][x] << ", ";
				}
			}
		}

		

		delete[] arr;
	return 0;
}