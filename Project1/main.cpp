#include <iostream>
#include <Windows.h>


void Arbyz(int arr[], int size, int* arr1[])
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = &arr[i];
		std::cout << arr1[i] << '\t';
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "1251");
	 
	int size;
	std::cin >> size;
	int* num1 = new int[size];


	delete[] num1;

	return 0;
}