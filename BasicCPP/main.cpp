#include <iostream>
#include <cmath>
using namespace std;

int main()
{


    const double PI = 3.14;
    setlocale(LC_ALL, "ru");






    float R1 = 2, R2 = 4, R3 = 8;
    float R0;

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "R0:" << R0 << endl;






    /*float S , L;
    float R;


    cout << "������� ������ ����������: ";
    cin >> L ;


    R = L / 2 * PI;
    L = 2 * PI * R;
    S = PI * (R * R);

    cout << "S =" << S << endl;
    cout << "R =" << R << endl;
    */



    /*float v, t, a;
    float S;


    cout << "������� �������� (��/���):" << endl;
    cin >> v;

    cout << " ������� ����� (�����):" << endl ;
    cin >> t ;

    cout << "������� ��������� (��/���):" << endl;
    cin >> a;


    S = v * t + (a * (t*t)) / 2;
    cout << "��������� ���������:" << endl;
    cout << S;*/





    return 0;



}