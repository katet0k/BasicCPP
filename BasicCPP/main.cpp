#include <iostream>
#include <cmath>
using namespace std;

int main() {


	setlocale(LC_ALL, "ru");


	cout << "  #==================Menu==================#" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  1 - ���������, ������� ���������    |" << endl;
	cout << "   |    ����� ����� ����� �� ���������    |" << endl;
	cout << "   |    ���� ����� �� 500.                |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  2 - ���������, ������� ���������    |" << endl;
	cout << "   |    � ������� �������� x � ������� y. |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  3 - ������� ������� ��������������  |" << endl;
	cout << "   |    ���� ����� ����� �� 1 �� 1000.    |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  4 - ������� ������������ ���� ����� |" << endl;
	cout << "   |    ����� �� ��������� ���� �����     |" << endl;
	cout << "   |    �� 20.                            |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  5 - ���������, ������� ������� ��   |" << endl;
	cout << "   |    �� ����� ������� ��������� �      |" << endl;
	cout << "   |    �������� ���� ������.             |" << endl;
	cout << "   |                                      |" << endl;
	cout << "  #========================================#" << endl;


	int number;
	cout << "    ������� ����� ";
	cin >> number;
	cout << " " << endl;

	switch (number)
	{
	case 1: {

		int a;
		cout << "   ������� ����� ";
		cin >> a;

		int n = 500 - a + 1;
		int S = (500 + a) * n / 2;

		cout << "     " << "����� ����� = " << 500 * 501 / 2 - a * (a - 1) / 2;

	}break;

	case 2: {

		float x;
		float y;

		cout << "    ������� x: ";

		cin >> x;

		cout << "    ������� y: ";

		cin >> y;

		cout << "     " << x << "^" << y << " = " << pow(x, y);
		cout << "  " << endl;


	}break;

	case 3: {

		double a = 1.0;
		double b = 1000.0;
		double s = (1000.0 + 1.0) / 2;
		cout << "    ������� ��������������: " << s;
		cout << "  " << endl;

	}break;

	case 4: {


		long long p = 1;
		int a;
		cout << "    ������� ����� ";
		cin >> a;

		for (int i = a; i <= 20; i++)
			p *= i;
		if (a > 20) {
			cout << "    ������� ����� ������ ";
		}
		else {
			cout << "     ������������ ���� ����� �����: " << p << endl;
			cout << "  " << endl;
		}


	}break;

	case 5: {

		int a, b = 1;

		cout << "    ������� ����� ";
		cin >> a;
		cout << " " << endl;

		while (b <= 10)
		{
			cout << "     " << a << " * " << b << " = " << b * a << '\n';
			b++;
		}

	}break;
	}



}





