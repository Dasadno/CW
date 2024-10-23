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

	cout << "Введите логин: ";
	cin >> login;
	cout << "Введите пароль: ";
	cin >> password;

	bool reg = registration(login, password);
	if (reg == true)
	{
		cout << "Регистрация прошла успешно \n";
		cout << "Ваш логин: " << login << "\n";
		cout << "Ваш пароль:  " << password << "\n";
	}
	else
	{
		cout << "Логин не может привышать длинну в 15 символов.";
	}


	return 0;
}