#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");

	float num;
	float sum = 0;

	std::cout << "� ���� ��������� �� ������� ����� � ����������� ��, ���� �� ������� 0\n\n\n\n ";
	do
	{
		std::cout << "������� �����: ";
		std::cin >> num;
		sum += num;

		
	} while (num != 0);
	
	std::cout << "����� ���� ����� =" << sum;



	return 0;
}
