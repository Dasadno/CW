#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");

	float num;
	float sum = 0;

	std::cout << "В этой программе вы вводите числа и складываете их, пока не введете 0\n\n\n\n ";
	do
	{
		std::cout << "Введите число: ";
		std::cin >> num;
		sum += num;

		
	} while (num != 0);
	
	std::cout << "Сумма всех чисел =" << sum;



	return 0;
}
