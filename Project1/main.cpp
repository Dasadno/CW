#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;


template <typename arb>
arb avg_arr(arb arr1[], int size)
{

	double sum1 = 0;


	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
		sum1 += arr1[i];
	}
	cout << endl;


	return sum1 / size;

}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int array_size = 5;
	float arr1[array_size]{ 1.3, 5.3, 2.5, 4.2, 7.6 };
	int arr2[array_size]{ 1,2,3,4,5 };
	double arr3[array_size]{ 5.321, 8.13551, 4.3232, 52.312, 61.23125 };

	cout << avg_arr(arr3, array_size);

	return 0;
}