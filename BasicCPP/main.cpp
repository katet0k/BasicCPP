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
		cout << "     |   1 - «находженн€ меншого з двох чисел    | " << endl;
		cout << "     |   2 - «находженн€ б≥льшого з двох чисел   | " << endl;
		cout << "     |   3 - «веденн€ числа у квадрат            | " << endl;
		cout << "     |   4 - «веденн€ числа в степ≥нь            | " << endl;
		cout << "     |   5 - ѕерев≥рка числа на парн≥сть         | " << endl;
		cout << "     |   6 - ѕерев≥рка числа на непарн≥сть       | " << endl;
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
			cout << "¬вед≥ть перше число --> ";
			cin >> x;
			cout << "¬вед≥ть друге число --> ";
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
			cout << "¬вед≥ть перше число --> ";
			cin >> x;
			cout << "¬вед≥ть друге число --> ";
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
			cout << "¬вед≥ть число --> ";
			cin >> x;
			println(k(x));
			system("pause");
		}break;
		case '4':
		{
			int x, y;
			cout << "¬вед≥ть число --> ";
			cin >> x;
			cout << "¬вед≥ть степ≥нь" << endl;
			cin >> y;

			println(s(x, y));
			system("pause");

		}break;
		case '5': {
			int x;
			cout << "¬вед≥ть число --> ";
			cin >> x;

			if (p(x)) {
				cout << "„исло парне" << endl;
			}
			else {
				cout << "„исло не парне" << endl;
			}

			system("pause");
		}break;
		case '6':
		{
			int x;
			cout << "¬вед≥ть число --> ";
			cin >> x;

			if (p1(x)) {
				cout << "„исло не парне" << endl;
			}
			else {
				cout << "„исло парне" << endl;
			}
			system("pause");

		}break;
		default:
			break;
		}
	} while (switch_on != '0');
	return 0;
}