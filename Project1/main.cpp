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


	std::cout << "� ���� ��������� �� ������� ����� � ����������� ��, ���� �� ������� 0\n\n ";
	while (num != 0)
	{
		std::cout << "������� �����: ";
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
	
	std::cout << "����� ���� ����� = " << sum << std::endl;
	std::cout << "����� ������ ����� = " << evensum << std::endl;
	std::cout << "����� ���� �������� ����� = " << oddsum << std::endl;

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
		std::cout << "������� ���-�� ������: ";
		std::cin >> rub_num;
		std::cout << "�� ����� 5 �����: ������, ����, ����, �����, ���� \n";
		std::cout << "������� ������ ��� �������: ";
		std::cin >> answer;

		if (answer == "������" || answer == "������")
		{
			std::cout << "�� " << rub_num << " ������ �� ������ " << (rub_num / dollar) * (5 / 100.0) << " ��������\n";
			std::cout << "5 ��������� �������� ������� ����.\n\n";
			std::cout << "���� ������ ������ ��� ������ ������� y, � ���� ������ ������� n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
			
		}
		else if (answer == "����" || answer == "����")
		{
			std::cout << "�� " << rub_num << " ����� �� ������ " << (rub_num / euro) * (5 / 100.0) << " ����";
			std::cout << "5 ��������� �������� ������� ����. \n\n";
			std::cout << "���� ������ ������ ��� ������ ������� y, � ���� ������ ������� n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
		}
		else if (answer == "����" || answer == "����")
		{
			std::cout << "�� " << rub_num << " ����� �� ������ " << (rub_num / uan) * (5 / 100.0) << " �����";
			std::cout << "5 ��������� �������� ������� ����. \n\n";
			std::cout << "���� ������ ������ ��� ������ ������� y, � ���� ������ ������� n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
		}
		else if (answer == "�����" || answer == "�����")
		{
			std::cout << "�� " << rub_num << " ������ �� ������ " << (rub_num / farit) * (5 / 100.0) << " �������";
			std::cout << "5 ��������� �������� ������� ����. \n\n";
			std::cout << "���� ������ ������ ��� ������ ������� y, � ���� ������ ������� n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
		}
		else if (answer == "����" || answer == "����")
		{
			std::cout << "�� " << rub_num << " ������ �� ������ " << (rub_num / en) * (5 / 100.0) << " ���";
			std::cout << "5 ��������� �������� ������� ����. \n\n";
			std::cout << "���� ������ ������ ��� ������ ������� y, � ���� ������ ������� n: ";
			std::cin >> exitansw;
			if (exitansw == 'y' || exitansw == 'Y')
			{
				continue;
			}
			else if (exitansw == 'n' || exitansw == 'N')
			{
				i++;
			}
		}
	}


	return 0;
}
