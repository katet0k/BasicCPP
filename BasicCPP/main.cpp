#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int number;

	cout << "   #===================MENU===================#" << endl;
	cout << "    |   1 - ����������� ��������, � �������  |" << endl;
	cout << "    |     ����� �����.                       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   2 - ������� ��������� �����������,   |" << endl;
	cout << "    |     ��������� ������ - 2 ������.       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   3 - ������� �� ����� �������������   |" << endl;
	cout << "    |     ������� �� ���������� �����������  |" << endl;
	cout << "    |     �� ������ ����� �������.           |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   4 - ������������, ������� �����,     |" << endl;
	cout << "    |     ����� � ������ �������� ��         |" << endl;
	cout << "    |     ��������.                          |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   5 - ����������� ������� ����� �����  |" << endl;
	cout << "    |     ��� �������� ������ �� ������,     |" << endl;
	cout << "    |     ���� ������� ���� � 8 �����.       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "   #==========================================#" << endl;

	cout << "  ";
	cin >> number;
	switch (number)
	{
	case 1: {

		int t, s, v;

		cout << "     ������� ���������� �� ��������� (� ��): ";
		cin >> s;
		cout << "     ������� �����, �� ������� ����� ������� (� �����): ";

		cin >> t;
		v = s / t;
		cout << "     ��� ����� ����� �� ���������: " << v << " ��/�" << endl;


	}break;

	case 2: {

		int h1, m1, s1;
		int h2, m2, s2;

		cout << "    ������� ��� ������ ������������� �������: ";
		cin >> h1;
		cout << "    ������� ������ ������ ������������� �������: ";
		cin >> m1;
		cout << "    ������� ������� ������ ������������� �������: ";
		cin >> s1;
		cout << "    ������� ��� ���������� ������������� �������: ";
		cin >> h2;
		cout << "    ������� ������ ���������� ������������� �������: ";
		cin >> m2;
		cout << "    ������� ������� ���������� ������������� �������: ";
		cin >> s2;

		int duration = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
		int cost = 0;
		for (; duration > 0; duration -= 60) {
			cost += 2;
		}
		cout << "" << endl;
		cout << "   ������� ����� ��� ������: " << cost << "���";
		cout << "" << endl;


	}break;

	case 3: {

		float length, consumption, petrol_1, petrol_2, petrol_3, value;

		float cost_petrol_1, cost_petrol_2, cost_petrol_3;

		cout << "     ������� ����������: ";
		cin >> length;

		cout << "     ������� ������ ������� �� 100 ��.: ";
		cin >> consumption;

		cout << "     ������� ��������� ������� ���� �������: ";
		cin >> petrol_1;

		cout << "     ������� ��������� ������� ���� �������: ";
		cin >> petrol_2;

		cout << "     ������� ��������� �������� ���� �������: ";
		cin >> petrol_3;

		cout << "" << endl;

		value = (length / 100) * consumption;
		cost_petrol_1 = value * petrol_1;
		cost_petrol_2 = value * petrol_2;
		cost_petrol_3 = value * petrol_3;

		cout << setw(35) << setiosflags(ios::left) << "     ��������� ������� ���� �������: " << setw(9) << cost_petrol_1 << endl
			<< setw(35) << "     ��������� ������� ���� �������: " << setw(9) << cost_petrol_2 << endl
			<< setw(35) << "     ��������� �������� ���� �������: " << setw(9) << cost_petrol_3 << endl << endl;


	}break;


	case 4: {


		const int time = 86400; //������ � ������
		int a;

		cout << "     ������� ����� � ��������, ��������� � ������ ���: ";
		cin >> a;

		int h = a % time / 3600;
		int m = a / 60 % 60;
		int s = a % 60;
		int endhh, endmm, endss;
		int tmp = h * 3600 + m * 60 + s;

		tmp = time - tmp;
		endhh = tmp / 3600;
		endmm = tmp / 60 - endhh * 60;
		endss = tmp - endmm * 60 - endhh * 3600;

		cout << "    ������: " << h << " ��� " << m << " ��� " << s << " ��� " << endl;
		cout << "    �� ��������: " << endhh << " ��� " << endmm << " ��� " << endss << " ���" << endl;

	}break;

	case 5: {


		int s, m, h = 0, t;
		cout << "     ������� �������: ";
		cin >> s;


		s / 3600;
		h = s / 60 / 60;

		t = 8 - h;

		if (h >= 9)
		{
			cout << "     ��� ������� ���� �������� " << endl;
		}
		else {

			cout << "    ��� �������� �������� " << t << " ����� " << endl;
		}



	}break;



	}





	return 0;
}