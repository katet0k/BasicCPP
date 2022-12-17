#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

struct Washing_machine
{
    string company;
    string color;
    double width;
    double length;
    double height;
    string power;
    string spin_speed;
    string heating_temperature;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " фірма";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << ".................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << company << endl;
        cout << " колір";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << ".................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << color << endl;
        cout << " ширина";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << width << "см" << endl;
        cout << " довжина";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................................ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << length << "см" << endl;
        cout << " висота";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << height << "см" << endl;
        cout << " потужність";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "............................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << power << endl;
        cout << " швидкість віджиму";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "...................... ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << spin_speed << endl;
        cout << " температура нагріву";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << ".................... ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << heating_temperature << endl;

    }
    void Input() {
        company = "Gorenje";
        color = "Білий";
        width = 59.5;
        length = 46;
        height = 85;
        power = "165 кВт / рік ";
        spin_speed = "1000 об / хв";
        heating_temperature = "90°C";
    }

};
struct Iron
{
    string firm;
    string model;
    string color;
    string minimal;
    string maximum;
    string steam;
    string power;
    
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " фірма";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << ".................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << firm << endl;
        cout << " модель";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << model << endl;
        cout << " колір";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << ".................................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << color << endl;
        cout << " мінімальна температура";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << minimal << endl;
        cout << " максимальна температура";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << maximum << endl;
        cout << " подача пари так / ні";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "................... ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << steam << endl;
        cout << " потужність";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "............................. ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << power << endl;

    }
    void Input() {
        firm = "TEFAL";
        model = "Easygliss Plus FV5718E0";
        color = "Білий/блакитний";
        minimal = "20°C";
        maximum = "80°C";
        steam = "так";
        power = "2500 Вт";
    }

};
struct Boiler
{
    string firm;
    string color;
    string power;
    string amount;
    string heating_temperature;
    void Output() {
        cout << "фірма";
        cout << ".................................. ";
        cout << firm << endl;
        cout << "колір";
        cout << "...................................";
        cout << color << endl;
        cout << "потужність";
        cout << "..............................";
        cout << power << endl;
        cout << "обсяг";
        cout << "...................................";
        cout << amount << endl;
        cout << "температура нагріву";
        cout << ".....................";
        cout << heating_temperature << endl;
            
    }
    void Input() {
        firm = "Banzai";
        color = "білий";
        power = "2 (1 +1) Вт";
        amount = "30 л";
        heating_temperature = "75 С°";
    }

};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   1 - Пральна машинка                     | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   2 - Праска                              | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   3 - Бойлер                              | " << endl;
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
            cout << "     Пральна машинка" << endl;
            Washing_machine* W = new Washing_machine;
            W->Input();
            W->Output();

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }break;
        case '2':
        {
            cout << "     Праска" << endl;
            Iron* I = new Iron;
            I->Input();
            I->Output();

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }break;
        case '3':
        {
            cout << "     Бойлер" << endl;
            Boiler* B = new Boiler;
            B->Input();
            B->Output();

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }break;
        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}
