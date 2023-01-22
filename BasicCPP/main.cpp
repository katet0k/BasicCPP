#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string text;
    string text1;
    int i = 1;
    int a;
    file.open("main.cpp", ios::in);
    if (file.is_open())
    {
        while (getline(file, text))
        {
            cout << i << "\t| " << text << endl;
            i++;
        }
    }
    cout << "--> ";
    cin >> a;
    cin.ignore();
    cout << "--> ";
    getline(cin, text1);

    if (file.is_open())
    {
        while (getline(file, text))
        {
            i++;
            if (a == i) {
                cout << i << "\t| " << text1 << endl;
            }
            else {
                cout << i << "\t| " << text << endl;
                i++;
            }
        }
    }

    file.open("main.cpp", ios::in);
    if (file.is_open())
    {
        while (getline(file, text))
        {
            cout << i << "\t| " << text << endl;
            i++;
        }
    }
    return 0;
}