#include <iostream>
#include <Windows.h>
#include <conio.h>

#include <iomanip>

using namespace std;

//1
void stepin(int a, int b, int c)
{
	cout << " ";
	int a1 = a;

	for (size_t i = 1; i < b; i++)
	{
		 a *= a1;

	}
	cout << " " << a1 << " ^ " << b << " = " << a << endl;
}
//2
void sumDiap(int a, int b,int sum) {

	sum = 0;
	cout << " ";
	for (size_t i = a; i <= b; i++)
	{
		if (i < b) {
			cout << i << " + ";
		}
		else if (i == b) {
			cout << i << " = ";
		}

		sum += i;

	}
	cout << sum << endl;

}
//3
double Dosconale(double x, double y, int c, double d, double a)
{

	if (y > x)
	{
		c = y - x;
		d = x;
	}
	else
	{
		c = x - y;
		d = y;
	}
	const uint32_t size = c;
	for (size_t i = d; i < c; i++)
	{
		if (i == 6)
		{
			cout << "\n6";
		}
		if (i == 28)
		{
			cout << "\n28";
		}
		if (i == 496)
		{
			cout << "\n496";
		}
		if (i == 8128)
		{
			cout << "\n8128";
		}
		if (i == 2096128)
		{
			cout << "\n2096128";
		}
		if (i == 33550336)
		{
			cout << "\n33550336";
		}
		if (i == 8589869056)
		{
			cout << "\n8589869056";
		}

	}

	return d;
}


//4
void card(int suit, int num)
{

	char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
	cout << " ___________________\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)cout << '|' << setw(4) << "1" << card[num - 1] << "              |\n";
	else cout << '|' << setw(4) << card[num - 1] << "               |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	switch (suit)
	{
	case 1: cout << '|' << setw(12) << "HEART" << "       |\n"; break;
	case 2: cout << '|' << setw(12) << "DIAMOND" << "       |\n"; break;
	case 3: cout << '|' << setw(12) << "CLUB" << "       |\n"; break;
	case 4: cout << '|' << setw(12) << "SPADE" << "       |\n"; break;
	}
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)cout << "|              " << "1" << card[num - 1] << "   |\n";
	else cout << "|               " << card[num - 1] << "   |\n";
	cout << "|                   |\n";
	cout << "|___________________|\n";
}
//5

void happy_array(int n) {

	int d;
	int sum1 = 0, sum2 = 0, i = 1;

	while (true) {
		if (n < 0)
		{
			break;
		}

		while (n > 0) {
			d = n % 10;
			if (i % 2 == 0)
				sum2 += d;
			else
				sum1 += d;
			n = n / 10;
			i++;
		}

		if (sum1 == sum2)
		{
			cout << " „исло счасливое " << endl;

			break;
		}
		else
		{
			cout << " „исло не счасливое " << endl;

			break;
		}
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	char switch_on;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	do {

		cout << endl;
		cout << "#===================MENU====================#" << endl;
		cout << " |   1 - вычисл€ет степень числа.          |" << endl;
		cout << " |                                         |" << endl;
		cout << " |   2 - возвращает сумму чисел из         |" << endl;
		cout << " |      диапазона.                         |" << endl;
		cout << " |                                         |" << endl;
		cout << " |   3 - поиск совершенных чиселю          |" << endl;
		cout << " |                                         |" << endl;
		cout << " |   4 - выводит на экран переданную       |" << endl;
		cout << " |      игральную  карту.                  |" << endl;
		cout << " |                                         |" << endl;
		cout << " |   5 - определ€ет, €вл€етс€ ли           |" << endl;
		cout << " |    Ђсчастливымї шестизначное число.     |" << endl;
		cout << " |                                         |" << endl;
		cout << "#===========================================#" << endl;

		switch_on = _getch();
		system("cls");

		switch (switch_on)
		{
		case '0':
		{
			break;
		}break;

		case '1':
		{
			int a, b, c = 0;
			cout << " ¬ведите число --> ";
			cin >> a ;
			cout << " ¬ведите число --> ";
			cin >> b;

			stepin(a, b, c);

		}break;

		case '2':
		{
			int a, b;
			cout << " ¬ведите число --> ";
			cin >> a;
			cout << " ¬ведите число --> ";
			cin >> b;
			int sum = 0;
			sumDiap(a, b, sum);

		}break;

		case '3':
		{
			double a, b, c = 0, d = 0;
			cout << " ¬ведите число --> ";
			cin >> a;
			cout << "\n ¬ведите число --> ";
			cin >> b;
			cout << "\n –езультат ---> " << Dosconale(a, b, c, d, a);



		}break;

		case '4':
		{
			int a, s;
			cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
			cin >> a;
			if (a > 13 || a < 1) {
				cout << "Error" << endl;
				break;
			}
			cout << "\n\t\t\tCard suits\n1. Heart.\n2. Diamond\n3. Club\n4. Spade\n";
			cout << "Input a card suit: ";
			cin >> s;
			if (s > 4 || s < 1) {
				cout << "Error" << endl;
				break;
			}
			card(s, a);

		}break;

		case '5':
		{
			int n; 
			cout << " ¬ведите число --> ";
			cin >> n;

			happy_array(n);

		}break;


		default:
			break;
		}

	} while (switch_on != '0');
	return 0;
}