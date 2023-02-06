#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstdlib> 
#include <ctime> 
using namespace std;

void HP() {
    int HP1 = 100;
    int HP2 = 100;

    cout << " -------------------- " << HP1 << "%" << "                                                                  " << " -------------------- " << HP2 << "%" << endl;

}
void Pers(char pers, string pee) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    string Harry_Potter = "Гаррі Поттер";
    string Ronald_Weasley = "Рональд Візлі ";
    string Hermione_Granger = "Герміона Ґрейнджер";
    string Draco_Malfoy = "Драко Мелфой";
    string Albus_Dumbledore = "Албус Дамблдор";
    string Severus_Snape = "Северус Снейп";
    string Luna_Lovegood = "Луна Лавґуд";
    /*if (pers > 7) {

        while (pers > 7) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers;
        }
        
    }
    if (pers < 1) {
        
        while (pers < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers;
        }
    }*/
    
    switch (pers)
    {
    case '1':
    {
        pee = Harry_Potter;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Harry_Potter << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case '2':
    {
        pee = Ronald_Weasley;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Ronald_Weasley << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case '3':
    {
        pee = Hermione_Granger;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Hermione_Granger << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case '4':
    {
        pee = Draco_Malfoy;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Draco_Malfoy << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case '5':
    {
        pee = Albus_Dumbledore;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Albus_Dumbledore << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case '6':
    {
        pee = Severus_Snape;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Severus_Snape << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    }break;
    case '7':
    {
        pee = Luna_Lovegood;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        cout << Luna_Lovegood << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    default: {
        while (pers) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers;
        }
    }break;
    }
}


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string Hogwarts = { "                 <-- Hogwarts.Student Wars --> " };
    cout << Hogwarts << endl << endl << endl;
    string Harry_Potter = "Гаррі Поттер";
    string Ronald_Weasley = "Рональд Візлі ";
    string Hermione_Granger = "Герміона Ґрейнджер";
    string Draco_Malfoy = "Драко Мелфой";
    string Albus_Dumbledore = "Албус Дамблдор";
    string Severus_Snape = "Северус Снейп";
    string Luna_Lovegood = "Луна Лавґуд";


    string Characters = { 
        " `````````````````````````````` \n"
        " `    1 - Гаррі Поттер        ` \n"
        " `    2 - Рональд Візлі       ` \n"
        " `    3 - Герміона Ґрейнджер  ` \n"
        " `    4 - Драко Мелфой        ` \n"
        " `    5 - Албус Дамблдор      ` \n"
        " `    6 - Северус Снейп       ` \n"
        " `    7 - Луна Лавґуд         ` \n"
        " `````````````````````````````` \n"
    };
    
    string Wingardium_Leviosa = "Вінґардіум Левіоза";
    string Locomotive_Mortis = "Локомотор Мортіс";
    char pers1;
    char pers2;
    string play1;
    string play2;
    string p1;
    string p2;
    string pee1;
    string pee2;

    cout << " Введіть ваше імя ~~ > ";
    cin >> p1;

    system("cls");
    cout << Hogwarts << endl << endl << endl;
    cout << " Введіть ваше імя ~~ > " << p1;
    cout << "                                                    Введіть ваше імя ~~ > ";
    cin >> p2;
    srand(time(0));
    int r = rand() % 2 +1;
    if (r == 1) {
        cout << " Гра рандомно вибрала гравця " << p1 << " першим " << endl;
        play1 = p1;
        play2 = p2;
    }
    if (r == 2) {
        cout << " Гра рандомно вибрала гравця " << p2 << " першим " << endl;
        play1 = p2;
        play2 = p1;
    }
    cout << endl;
    cout << " ";
    system("pause");
    system("cls");
    cout << Hogwarts << endl << endl << endl;
    cout << " Гравець ~~ > " << play1;
    cout << "                                                    Гравець ~~ > " << play2 << endl;

    cout << endl << endl;
    
    cout << " Гравець " << play1 <<" виберіть персонажа: " << endl;
    cin >> pers1;
    Pers(pers1,pee1);
    switch (pers1)
    {
    case '1':
    {
        pee1 = Harry_Potter;
    }break;
    case '2':
    {
        pee1 = Ronald_Weasley;
    }break;
    case '3':
    {
        pee1 = Hermione_Granger;
    }break;
    case '4':
    {
        pee1 = Draco_Malfoy;
    }break;
    case '5':
    {
        pee1 = Albus_Dumbledore;
    }break;
    case '6':
    {
        pee1 = Severus_Snape;

    }break;
    case '7':
    {
        pee1 = Luna_Lovegood;
    }break;
    default:
        break;
    }
    cout << endl; 
    cout << " ";
    system("pause");
    system("cls");
    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                    Гравець ~~ > " << play2 << endl;

    cout << endl << endl;
    cout << Characters << endl;
    cout << "Гравець " << play2 << " виберіть персонажа: " << endl;
    cin >> pers2;

    if (pers1 == pers2) {
        while (pers1 == pers2) {
            cout << "Цей персонаж вибран іншим гравцем, виберіть іншого персонажа ~~> ";
            cin >> pers2;
        }
    }
    Pers(pers2, pee2);
    cout << endl;
    cout << " ";
    system("pause");
    system("cls");
    switch (pers2)
    {
    case '1':
    {
        pee2 = Harry_Potter;
    }break;
    case '2':
    {
        pee2 = Ronald_Weasley;
    }break;
    case '3':
    {
        pee2 = Hermione_Granger;
    }break;
    case '4':
    {
        pee2 = Draco_Malfoy;
    }break;
    case '5':
    {
        pee2 = Albus_Dumbledore;
    }break;
    case '6':
    {
        pee2 = Severus_Snape;

    }break;
    case '7':
    {
        pee2 = Luna_Lovegood;
    }break;
    default:
        break;
    }
    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                                " << play2 << " ~~~ " << pee2 << endl;
    
    cout << "" << endl;


    return 0;
}