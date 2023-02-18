#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include <algorithm>
#include <vector>
using namespace std;

uint64_t global_id = 0;
struct Complex {

    double x, y;
    void Print() {
        cout << x << " ";
        (y > 0) ? cout << " + " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print1() {
        cout << x << " ";
        (y > 0) ? cout << " + " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print2() {
        cout << x << " ";
        (y > 0) ? cout << " * " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print3() {
        cout << x << " ";
        (y > 0) ? cout << " / " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
};

Complex Sum(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x + c1.x;
    res.y = c1.y + c2.y;
    return res;
}
Complex B(Complex c1, Complex c2) {
    Complex res1;
    res1.x = c1.x - c1.x;
    res1.y = c1.y - c2.y;
    return res1;
}
Complex M(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x * c1.x;
    res.y = c1.y * c2.y;
    return res;
}
Complex D(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x / c1.x;
    res.y = c1.y / c2.y;
    return res;
}

struct Surname {

    bool is_empty_entity = true;
    string surname;

    void Input()
    {
        cout << " Surname --> "; cin >> surname;
        is_empty_entity = false;
    }
    void Output()
    {
        if (is_empty_entity == false)
        {

            cout << " Surname --> " << surname;
        }
        else {
            cout << "Empty entity!" << endl;
        }
    }
};

struct Car {

    void k() {
        string length = " 4500 ";
        string landing_height = " 1642 ";
        string power_engine = " 100 (136) ";
        string wheel_diameter = " 2692 ";
        string color = " чорний ";
        string type_of_gearbox = " автомат ";

        cout << "довжина ______________________ " << length << endl;
        cout << "кліренс (висота посадки) _____ " << landing_height << endl;
        cout << "об’єм двигуна ________________ " << power_engine << endl;
        cout << "потужність двигуна ___________ " << wheel_diameter << endl;
        cout << "діаметр коліс ________________ " << wheel_diameter << endl;
        cout << "колір ________________________ " << color << endl;
        cout << "тип коробки передач __________ " << type_of_gearbox << endl;
    }

};
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |     1 - Описує комплексне число.          | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |     2 - Автомобіль                        | " << endl;
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
        case '9':
        {
            uint32_t size = 5;
            string* surname = new string[size];

            for (size_t i = 0; i < size; i++)
            {
                cin >> surname[i];
                cout << endl;
            }
            system("pause");
            system("cls");

            sort(surname, surname + size);
            for (size_t i = 0; i < size; i++)
            {
                cout << i << " - ";
                cout << surname[i] << endl;
                cout << endl;
            }
            system("pause");

        }break;
        case '1':
        {

            Complex c1;
            Complex c2;
            c1.x = 5;
            c1.y = 4;
            c1.Print();
            c2.x = 6;
            c2.y = 5;
            c2.Print();
            char switch_on1;

            do
            {

                cout << endl;
                cout << "#===============#" << endl;
                cout << " |   1 --> +   | " << endl;
                cout << " |   2 --> -   | " << endl;
                cout << " |   3 --> *   | " << endl;
                cout << " |   4 --> /   | " << endl;
                cout << " | 0 --> exit  | " << endl;
                cout << "#===============#" << endl;

                cout << " ---> ";
                switch_on1 = _getch();
                cout << endl;

                switch (switch_on1)
                {
                case '0': {
                    break;
                }break;
                case '1':
                {
                    Complex c3 = Sum(c1, c2);
                    c3.Print();

                    system("pause");
                    system("cls");

                }break;
                case '2': {
                    Complex c4 = B(c1, c2);
                    c4.Print1();

                    system("pause");
                    system("cls"); 

                }break;
                case '3': {
                    Complex c5 = M(c1, c2);
                    c5.Print2();

                    system("pause");
                    system("cls");

                }break;
                case '4': {
                    Complex c6 = D(c1, c2);
                    c6.Print3();

                    system("pause");
                    system("cls");

                }break;
                default:
                    break;
                }

            } while (switch_on1 != '0');


        }break;

        case '2':
        {
            Car car = car;

            car.k();
            system("pause");
        }break;
        }
    } while (switch_on != '0');

        return 0;
}