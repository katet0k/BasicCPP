#include <iostream>
#include <conio.h>

using namespace std;


void n1(int* x, int* y)
{
	if (*x > *y) {
		cout << *x << " > " << *y << endl;
	}
	if (*x < *y) {
		cout << *x << " < " << *y << endl;
	}
	if (*x == *y) {
		cout << *x << " = " << *y << endl;
	}
}
void n2(int* x)
{
	if (*x > 0) {
		cout << *x << " > " << 0;
	}
	if (*x < 0) {
		cout << *x << " < " << 0;
	}
	if (*x == 0) {
		cout << *x << " = " << 0;
	}
}
void n3(int* x, int* y)
{
	cout << *y << " " << *x << endl;
}
void n4(double* x, double* y, int* q)
{
	switch (* q)
	{
	case 1: {

		cout << *x << " + " << *y << " = " << *x + *y << endl;
	}break;
	case 2: {

		cout << *x << " - " << *y << " = " << *x - *y << endl;
	}break;
	case 3: {

		cout << *x << " * " << *y << " = " << *x * *y << endl;
	}break;
	case 4: {

		cout << *x << " / " << *y << " = " << *x / *y << endl;
	}break;

	default: {

		cout << "Error!" << endl;

	}break;
		delete[] x, y, q;
	}
	

}
void n5(int arr[], int size, int sum) {

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
		sum += arr[i];
	}
	cout << endl << endl;
	cout << "Sum = " << sum << endl;
}
int main()
{
	char switch_on;
	do
	{
		system("cls");
		cout << "  #================#" << endl;
		cout << "  |                |" << endl;
		cout << "  |                |" << endl;
		cout << "  |                |" << endl;
		cout << "  |                |" << endl;
		cout << "  #================#" << endl;
		cout << " --> ";
	
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
			int* x = new int{};
			int* y = new int{};
			cout << " --> ";
			cin >> *x;
			cout << " --> ";
			cin >> *y;
			n1(x, y);
			cout << endl;
			system("pause");
			delete x, y;

		}break;
		case '2':
		{
			int* x = new int{};
			cout << " --> ";
			cin >> *x;
			n2(x);
			cout << endl;
			system("pause");
			delete x;
		}break;
		case '3':
		{
			int* x = new int{};
			int* y = new int{};
			cout << " --> ";
			cin >> *x;
			cout << " --> ";
			cin >> *y;
			n3(x, y);
			cout << endl;
			system("pause");
			delete x, y;
		}break;
		case '4':
		{
			
			double* x = new double{};
			double* y = new double{};
			int* q = new int{};
			cout << " --> ";
			cin >> *x;
			cin.ignore();
			cout << " --> ";
			cin >> *y;
			cin.ignore();
			cout << "  #================#" << endl;
			cout << "  |  1 ---> +      |" << endl;
			cout << "  |  2 ---> -      |" << endl;
			cout << "  |  3 ---> *      |" << endl;
			cout << "  |  4 ---> /      |" << endl;
			cout << "  #================#" << endl;
			cout << " --> ";
			
			cin >> *q;
			cin.ignore();

			n4(x, y, q);

			cout << endl;
			system("pause");
			delete x; delete y;delete q;

		}break;
		case '5':
		{
			
			int size = 10 ;
			int* arr = new int [size];
			int sum = 0;

			n5(arr, size, sum);

			cout << endl;
			system("pause");
			delete[] arr, sum;

		}break;

		default:
			break;
		}

	} while (switch_on != '0');
	return 0;
}