#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

bool logining(string login, string password, string login_pass, string password_pass)
{
	if (end(login) - begin(login) > 15 || end(password) - begin(password) > 15)
	{
		cout << "Ћогин и пароль не могут превышать 15 символов.";
		return false;
	}
	else if (login == login_pass && password == password_pass)
	{
		return true;
	}
}

int main(){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string login = "arbyz";
	string password = "olegovich";
	string login_pass;
	string password_pass;

	cout << "¬ведите логин: ";
	getline(cin, login_pass, '\n');
	cout << "¬ведите пароль: ";
	getline(cin, password_pass, '\n');

	bool reg = logining(login, password, login_pass, password_pass);
	if (reg == true)
	{
		cout << "¬ход прошел успешно \n";
	}
	else
	{
		cout << "ѕароль или логин введены неправильно.";
	}


	return 0;
}