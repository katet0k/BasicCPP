#include <iostream>
using namespace std;



void numbr1(int d1, int m1, int ye1, int d2, int m2, int ye2, int k) {


	k = d1;

	if (m1 == 2 || m2 == 2) {
		if (ye1 || ye2 % 4 == 0) {
			k += 29;
		}
		else {
			k += 28;
		}
		
	}
	if (m1 > 12 || m2 > 12)
	{

		if (d1 == 1 || d2 == 1) {
			k += 31;
		}
		if (d1 == 2 || d2 == 2) {
			k += 30;
		}
		if (d1 || d2 == 3) {
			k += 31;
		}
		if (d1 || d2 == 4) {
			k += 30;
		}
		if (d1 || d2 == 5) {
			k += 31;
		}
		if (d1 || d2 == 6) {
			k += 30;
		}
		if (d1 || d2 == 7) {
			k += 31;
		}
		if (d1 || d2 == 8) {
			k += 31;
		}
		if (d1 || d2 == 9) {
			k += 30;
		}
		if (d1 || d2 == 10) {
			k += 31;
		}
		if (d1 || d2 == 11) {
			k += 30;
		}
		if (d1 || d2 == 12) {
			k += 31;
		}
	}
	if (d1 > 31) {
		m1 += 1;
	}
	if (d2 > 31) {
		m2 += 1;
	}


}



int main()
{
	setlocale(LC_ALL, "ru");

	int num;
	cin >> num;

	switch (num) {
	case 1:
	{

		int d1, d2, m1, m2, ye1, ye2;
		int k = 0;
		cout << " введите день ";
		cin >> d1;
		cout << " введите мес€ц ";
		cin >> m1;
		cout << " введите год ";
		cin >> ye1;

		//cout << " введите день ";
		//cin >> d2;
		//cout << " введите мес€ц ";
		//cin >> m2;
		//cout << " введите год ";
		//cin >> ye2;

		numbr1(d1, d2, m1, m2, ye1, ye2,k);

		cout << d1 << "_" << m1 << "_" << ye1 << endl;
	}

	default:
		break;
	}

	return 0;
}