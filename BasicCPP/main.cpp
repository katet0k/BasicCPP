#include <iostream>
#include <cmath>
using namespace std;

int main() {


	setlocale(LC_ALL, "ru");


	cout << "  #==================Menu==================#" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  1 - Программа, которая вычисляет    |" << endl;
    cout << "   |    сумму целых чисел от введеного    |" << endl;
	cout << "   |    вами числа до 500.                |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  2 - Программа, которая вычисляет    |" << endl;
	cout << "   |    и выводит значение x в степени y. |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  3 - Находит среднее арифметическое  |" << endl;
	cout << "   |    всех целых чисел от 1 до 1000.    |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  4 - Находит произведение всех целых |" << endl; 
	cout << "   |    чисел от введеного вами числа     |" << endl;
	cout << "   |    до 20.                            |" << endl;
	cout << "   |                                      |" << endl;
	cout << "   |  5 - Программа, которая выводит на   |" << endl;
	cout << "   |    на экран таблицу умножения с      |" << endl;
	cout << "   |    введеным вами числом.             |" << endl;
	cout << "   |                                      |" << endl;
	cout << "  #========================================#" << endl;

	
	int number;
	cout << "    введите число ";
	cin >> number;
	cout << " " << endl;

switch (number)
{
case 1:{

	int a;
	cout << "   введите число ";
	cin >> a;

	int n = 500 - a + 1;
	int S = (500 + a) * n / 2;

	cout << "     "<< "сумма чисел = " << 500 * 501 / 2 - a * (a - 1) / 2;

}break;

case 2:{

	float x;
	float y;

	cout << "    Введите x: ";

	cin >> x;

	cout << "    Введите y: ";

	cin >> y;

	cout << "     " << x << "^" << y << " = " << pow(x, y);
	cout << "  " << endl;


}break;

case 3: {
	
	double a = 1.0;
	double b = 1000.0;
	double s = (1000.0 + 1.0) / 2;
	cout << "    среднее арифметическое: " << s;
	cout << "  " << endl;

}break;

case 4: {

	
		long long p = 1;
		int a;
		cout << "    введите число ";
		cin >> a;
		
		for (int i = a; i <= 20; i++)
			p *= i;
		if (a > 20) {
			cout << "    введите число меньше ";
		}
		else {
			cout << "     произведение всех целых чисел: " << p << endl;
			cout << "  " << endl;
		}
		
		
}break;

case 5: {

	int a, b = 1;

	cout << "    введите число ";
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





