#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;
#define print(value) cout << value
#define println(value) cout << value << endl;
#define endLine cout << endl;

#define m(x,y) x<y
#define b(x,y) x>y
#define d(x,y) x==y

#define k(x) x*x
#define s(x,y) pow(x,y)

#define p(x) x%2==0
#define p1(x) x%2!=0




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char switch_on;
	do
	{
		system("cls");
		cout << "    #=====================MENU====================#" << endl;
		cout << "     |   1 - ����������� ������� � ���� �����    | " << endl;
		cout << "     |   2 - ����������� ������� � ���� �����   | " << endl;
		cout << "     |   3 - �������� ����� � �������            | " << endl;
		cout << "     |   4 - �������� ����� � ������            | " << endl;
		cout << "     |   5 - �������� ����� �� �������         | " << endl;
		cout << "     |   6 - �������� ����� �� ���������       | " << endl;
		cout << "     |                                           | " << endl;
		cout << "    #=============================================#" << endl;
		cout << "     |   0 - Exit                                |" << endl;
		cout << "    #=============================================#" << endl;

		cout << "\n --> ";
		switch_on = _getch();
		system("cls");
		cout << endl;

		switch (switch_on)
		{
		case '0': {
			break;
		}break;

		case '1':
		{
			int x, y;
			cout << "������ ����� ����� --> ";
			cin >> x;
			cout << "������ ����� ����� --> ";
			cin >> y;
			if (m(x, y)) {
				cout << x << " < " << y << endl;
			}
			if (b(x, y)) {
				cout << x << " > " << y << endl;
			}
			if (d(x, y)) {
				cout << x << " = " << y << endl;
			}

			system("pause");
		}break;
		case '2':
		{
			int x, y;
			cout << "������ ����� ����� --> ";
			cin >> x;
			cout << "������ ����� ����� --> ";
			cin >> y;
			if (b(x, y)) {
				cout << x << " > " << y << endl;
			}
			if (m(x, y)) {
				cout << x << " < " << y << endl;
			}
			if(d(x,y)) {
				cout << x << " = " << y << endl;
			}
			system("pause");
		}break;
		case '3':
		{
			int x;
			cout << "������ ����� --> ";
			cin >> x;
			println(k(x));
			system("pause");
		}break;
		case '4':
		{
			int x, y;
			cout << "������ ����� --> ";
			cin >> x;
			cout << "������ ������" << endl;
			cin >> y;

			println(s(x, y));
			system("pause");

		}break;
		case '5': {
			int x;
			cout << "������ ����� --> ";
			cin >> x;

			if (p(x)) {
				cout << "����� �����" << endl;
			}
			else {
				cout << "����� �� �����" << endl;
			}

			system("pause");
		}break;
		case '6':
		{
			int x;
			cout << "������ ����� --> ";
			cin >> x;

			if (p1(x)) {
				cout << "����� �� �����" << endl;
			}
			else {
				cout << "����� �����" << endl;
			}
			system("pause");

		}break;
		default:
			break;
		}
	} while (switch_on != '0');
	return 0;
}