#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int number;

	cout << "   #===================MENU===================#" << endl;
	cout << "    |   1 - Вычислевает скорость, с которой  |" << endl;
	cout << "    |     нужно ехать.                       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   2 - Считает стоимость путешествия,   |" << endl;
	cout << "    |     стоимость минуты - 2 гривны.       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   3 - Выводит на экран сравнительную   |" << endl;
	cout << "    |     таблицу со стоимостью путешествия  |" << endl;
	cout << "    |     на разных видах топлива.           |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   4 - Подсчитывает, сколько часов,     |" << endl;
	cout << "    |     минут и секунд осталось до         |" << endl;
	cout << "    |     полуночи.                          |" << endl;
	cout << "    |                                        |" << endl;
	cout << "    |   5 - Посчитывает сколько целых часов  |" << endl;
	cout << "    |     вам осталось сидеть на работе,     |" << endl;
	cout << "    |     если рабочий день — 8 часов.       |" << endl;
	cout << "    |                                        |" << endl;
	cout << "   #==========================================#" << endl;

	cout << "  ";
	cin >> number;
	switch (number)
	{
	case 1: {

		int t, s, v;

		cout << "     Введите расстояние до аэропорта (в км): ";
		cin >> s;
		cout << "     Введите время, за которое нужно доехать (в часах): ";

		cin >> t;
		v = s / t;
		cout << "     Вам нужно ехать со скоростью: " << v << " км/ч" << endl;


	}break;

	case 2: {

		int h1, m1, s1;
		int h2, m2, s2;

		cout << "    Введите час начала использования скутера: ";
		cin >> h1;
		cout << "    Введите минуту начала использования скутера: ";
		cin >> m1;
		cout << "    Введите секунду начала использования скутера: ";
		cin >> s1;
		cout << "    Введите час завершения использования скутера: ";
		cin >> h2;
		cout << "    Введите минуту завершения использования скутера: ";
		cin >> m2;
		cout << "    Введите секунду завершения использования скутера: ";
		cin >> s2;

		int duration = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
		int cost = 0;
		for (; duration > 0; duration -= 60) {
			cost += 2;
		}
		cout << "" << endl;
		cout << "   Поездка будет вам стоить: " << cost << "грн";
		cout << "" << endl;


	}break;

	case 3: {

		float length, consumption, petrol_1, petrol_2, petrol_3, value;

		float cost_petrol_1, cost_petrol_2, cost_petrol_3;

		cout << "     Введите расстояние: ";
		cin >> length;

		cout << "     Введите расход бензина на 100 км.: ";
		cin >> consumption;

		cout << "     Введите стоимость первого вида бензина: ";
		cin >> petrol_1;

		cout << "     Введите стоимость второго вида бензина: ";
		cin >> petrol_2;

		cout << "     Введите стоимость третьего вида бензина: ";
		cin >> petrol_3;

		cout << "" << endl;

		value = (length / 100) * consumption;
		cost_petrol_1 = value * petrol_1;
		cost_petrol_2 = value * petrol_2;
		cost_petrol_3 = value * petrol_3;

		cout << setw(35) << setiosflags(ios::left) << "     Стоимость первого вида топлива: " << setw(9) << cost_petrol_1 << endl
			<< setw(35) << "     Стоимость второго вида топлива: " << setw(9) << cost_petrol_2 << endl
			<< setw(35) << "     Стоимость третьего вида топлива: " << setw(9) << cost_petrol_3 << endl << endl;


	}break;


	case 4: {


		const int time = 86400; //секунд в сутках
		int a;

		cout << "     Введите время в секундах, прошедшее с начала дня: ";
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

		cout << "    Сейчас: " << h << " час " << m << " мин " << s << " сек " << endl;
		cout << "    до полуночи: " << endhh << " час " << endmm << " мин " << endss << " сек" << endl;

	}break;

	case 5: {


		int s, m, h = 0, t;
		cout << "     введите секунды: ";
		cin >> s;


		s / 3600;
		h = s / 60 / 60;

		t = 8 - h;

		if (h >= 9)
		{
			cout << "     ваш рабочий день завершен " << endl;
		}
		else {

			cout << "    вам осталось работать " << t << " часов " << endl;
		}



	}break;



	}





	return 0;
}