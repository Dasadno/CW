#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

bool registration(string login, string password)
{
	if (end(login) - begin(login) > 15 || end(password) - begin(password) > 15)
	{
		
		return false;
	}
	else
	{
		return true;
	}
}

int main(){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string login;
	string password;

	cout << "������� �����: ";
	cin >> login;
	cout << "������� ������: ";
	cin >> password;

	bool reg = registration(login, password);
	if (reg == true)
	{
		cout << "����������� ������ ������� \n";
		cout << "��� �����: " << login << "\n";
		cout << "��� ������:  " << password << "\n";
	}
	else
	{
		cout << "����� �� ����� ��������� ������ � 15 ��������.";
	}


	return 0;
}