#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");

	float num;
	float sum = 0;
	int evensum;
	float oddsum;


	std::cout << "� ���� ��������� �� ������� ����� � ����������� ��, ���� �� ������� 0\n\n\n\n ";
	do
	{
		std::cout << "������� �����: ";
		std::cin >> num;
		sum += num;
		if (num / 2)
		{
			evensum += num;
		}
		else
		{
			oddsum += num;
		}
		
	} while (num != 0);
	
	std::cout << "����� ���� ����� = " << sum << std::endl;
	std::cout << "����� ������ ����� = " << evensum << std::endl;
	std::cout << "����� ���� �������� ����� = " << oddsum << std::endl;


	return 0;
}
