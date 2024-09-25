#include <iostream>
#include <Windows.h>
int main() {
	setlocale(LC_ALL, "ru");

	float num;
	float sum = 0;
	int evensum = 0;
	float oddsum = 0;


	std::cout << "В этой программе вы вводите числа и складываете их, пока не введете 0\n\n\n\n ";
	do
	{
		std::cout << "Введите число: ";
		std::cin >> num;
		sum += num;
		if (num / 2 == 0)
		{
			evensum += num;
		}
		else
		{
			oddsum += num;
		}
		
	} while (num != 0);
	
	std::cout << "Сумма всех чисел = " << sum << std::endl;
	std::cout << "Сумма четных чисел = " << evensum << std::endl;
	std::cout << "Сумма всех нечетных чисел = " << oddsum << std::endl;


	return 0;
}
