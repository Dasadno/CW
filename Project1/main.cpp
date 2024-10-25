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

template <typename at>
void my_swap(at &examp1, at &examp2)
{
	at num1 = examp1;
	at num2 = examp2;
	examp1 = num2;
	examp2 = num1;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "1251");
	 
	int size;
	std::cin >> size;
	int* num1 = new int[size];

	int a = 5;
	int b = 7;
	my_swap(a, b);


	std::cout << a << " " << b;


	delete[] num1;

	return 0;
}