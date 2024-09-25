#include <iostream>
#include <windows.h>
#include <string.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	int num;
	int sum = 0;
	int evensum = 0;
	int oddsum = 0;


	std::cout << "В этой программе вы вводите числа и складываете их, пока не введете 0\n\n ";
	while (num != 0)
	{
		std::cout << "Введите число: ";
		std::cin >> num;
		sum += num;
		if (num % 2 == 0)
		{
			evensum += num;
		}
		else
		{
			oddsum += num;
		}
		
	}
	
	std::cout << "Сумма всех чисел = " << sum << std::endl;
	std::cout << "Сумма четных чисел = " << evensum << std::endl;
	std::cout << "Сумма всех нечетных чисел = " << oddsum << std::endl;

	*/


	int rub = 1;
	int rub_num;
	std::string answer;
	double dollar = 92.37;
	double euro = 103.26;
	double uan = 13.14;
	double farit = 37;
	double en = 0.64;
	char exitansw;

	

	for (int i = 0; i < 1;)
	{
		std::cout << "Введите кол-во рублей: ";
		std::cin >> rub_num;
		std::cout << "На выбор 5 валют: Доллар, Евро, Юань, Фарит, Йена \n";
		std::cout << "Введите валюту для покупки: ";
		std::cin >> answer;

		if (answer == "доллар" || answer == "Доллар")
		{
			std::cout << "На " << rub_num << " Рублей вы купили " << (rub_num / dollar) - ((rub_num / dollar) / 100 * 5) << " Долларов\n";
			std::cout << "5 Процентов комиссии взымает банк.\n\n";
			std::cout << "Если хотите купить еще валюты введите y, в ином случае введите n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else if (answer == "евро" || answer == "Евро")
		{
			std::cout << "На " << rub_num << " Рублей вы купили " << (rub_num / euro) - ((rub_num / euro) / 100 * 5)  << " Евро\n";
			std::cout << "5 Процентов комиссии взымает банк. \n\n";
			std::cout << "Если хотите купить еще валюты введите y, в ином случае введите n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else if (answer == "Юань" || answer == "юань")
		{
			std::cout << "На " << rub_num << " Рублей вы купили " << (rub_num / uan) - ((rub_num / uan) / 100 * 5) << " Юаней \n";
			std::cout << "5 Процентов комиссии взымает банк. \n\n";
			std::cout << "Если хотите купить еще валюты введите y, в ином случае введите n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else if (answer == "Фарит" || answer == "фарит")
		{
			std::cout << "На " << rub_num << " Рублей вы купили " << (rub_num / farit) - ((rub_num / farit) / 100 * 5) << " Фаритов\n";
			std::cout << "5 Процентов комиссии взымает банк. \n\n";
			std::cout << "Если хотите купить еще валюты введите y, в ином случае введите n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else if (answer == "Йена" || answer == "йена")
		{
			std::cout << "На " << rub_num << " Рублей вы купили " << (rub_num / en) - ((rub_num / en) / 100 * 5) << " Йен";
			std::cout << "5 Процентов комиссии взымает банк. \n\n";
			std::cout << "Если хотите купить еще валюты введите y, в ином случае введите n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}


	return 0;
}
