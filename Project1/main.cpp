#include <Windows.h>
#include <iostream>
#include <string>

struct Student
{
	std::string name;
	std::string surname;
	std::string patronymic;
	std::string FCs;

	unsigned int groupNumber;

	std::string department;

	short int* evaluations[4]{};

	bool excluded = false;

	void SetFCs()
	{
		std::cout << "¬ведите им€ студента: ";
		std::getline(std::cin, name, '\n');
		std::cout << "¬ведите фамилию студента: ";
		std::getline(std::cin, surname, '\n');
		std::cout << "¬ведите отчество студента: ";
		std::getline(std::cin, patronymic, '\n');
		UpdateFCs();
	}
	std::string GetFCs()
	{
		return FCs;
	}
	void UpdateFCs()
	{
		FCs = surname + " " + name + " " + patronymic;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 3;
	Student rpo23_2[size];
	for (int i = 0; i < size; i++)
	{
		rpo23_2[i].SetFCs();
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "\n" << rpo23_2[i].GetFCs();
	}
	std::cout << "\n";

	return 0;
}