
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    fstream file;
    string text;
    string text1;
    string* text_from_file = nullptr;
    int size_text;
    int i = 1;
    int a;
    file.open("main.cpp", ios::in);
    if (file.is_open())
    {
        while (getline(file, text))
        {
            i++;
        }
        size_text = i;
        text_from_file = new string[i];
        file.close();
    }
    file.open("main.cpp", ios::in);
    if (file.is_open())
    {
        i = 1;
        while (getline(file, text))
        {
            text_from_file[i] = text;
            i++;
        }
        file.close();
    }
    for (size_t i = 0; i < size_text; i++)
    {
        cout << i + 1 << "\t| " << text_from_file[i] << endl;
    }
    cout << endl;
    cout << "#=======================#" << endl;
    cout << " |   1 - ���������     |" << endl;
    cout << " |                     |" << endl;
    cout << " |   2 - �����������   |" << endl;
    cout << " |                     |" << endl;
    cout << " |   3 - ���������     |" << endl;
    cout << " |                     |" << endl;
    cout << " |   0 - �����         |" << endl;
    cout << "#=======================#" << endl;

    char switch_on;
    cout << "\n --> ";
    cin >> switch_on;
    switch (switch_on)
    {
    case '1':
    {
        cout << "����� ������ ������ --> ";
        cin >> a;
        cin.ignore();
        cout << "����� --> ";
        getline(cin, text1);
        if (a < 0 || a > size_text)
        {
            cout << "Eror" << endl;
        }
        else
        {
            text_from_file[a + 1] = text1;
        }
        for (size_t i = 0; i < size_text; i++)
        {
            cout << i + 1 << "\t| " << text_from_file[i] << endl;
        }
        
    }break;
    case 2: {
        cout << "����� ������ ������ --> ";
        cin >> a;
        cin.ignore();
        cout << "����� --> ";
        getline(cin, text1);
        if (a < 0 || a > size_text)
        {

        }
        else
        {
            text_from_file[a - 1] = text1;
        }
        for (size_t i = 0; i < size_text; i++)
        {
            cout << i + 1 << "\t| " << text_from_file[i] << endl;
        }
    }break;
    default:
        break;
    }

    return 0;
}