#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian"); 


    do
    {
        char switch_on;

        switch_on = _getch();
        switch (switch_on)
        {
        case '1':
        {
            int line, a;
            char s, speed;


            cout << "Введите символ : ";
            cin >> s;
            cout << " Введите длину линии : ";
            cin >> line;
            cout << "\n 1 - Горизонтальная \n 2 - Вертикальная линия \n\n Выберите вариант : ";
            cin >> a;
            for (int i = 0; i < a; i++)
            {
                if (a != '1' && a != '2')
                {
                    cout << " Такого линии нету \n Введите одну из предложеных ";
                    cin >> a;
                }
            }
            cout << "\n f - Быстрая \n n - Нормальная \n s - Медленная \n\n Выберите вариант : ";
            cin >> speed;

            switch (a)
            {
            case 1:
            {
                for (int i = 0; i < line; i++)
                {
                    if (speed == 'q')
                    {
                        Sleep(10);
                        cout << s;
                    }

                    else if (speed == 'w')
                    {
                        Sleep(200);
                        cout << s;
                    }

                    else if (speed == 'e')
                    {
                        Sleep(800);
                        cout << s;
                    }

                    for (int i = 0; i < line; i++) {

                        if (speed != 'q' && speed != 'w' && speed != 'e') {

                            cout << " Такой скорости нету \n Введите одну из предложеных ";
                            cin >> speed;
                            
                        }

                    }
                }
                        cout << endl;
            }break;

            case 2:
            {
                for (int j = 0; j < line; j++)
                {
                    if (speed == 'q')
                    {
                        Sleep(10);
                        cout << s;
                    }

                    else if (speed == 'w')
                    {
                        Sleep(200);
                        cout << s;
                    }

                    else if (speed == 'e')
                    {
                        Sleep(800);
                        cout << s;
                    }
                    for (int j = 0; j < line; j++) {

                        if (speed != 'q' && speed != 'w' && speed != 'e') {

                            cout << " Такой скорости нету \n Введите одну из предложеных ";
                            cin >> speed;

                        }

                    }
                    cout << endl;
                }

            }break;

            }
            cout << endl;



        }break;

        case '2':
        {
            if (((rand() % 31) + 6 > (rand() % 31) + 6))
            {
                cout << (rand() % 31) + 6 << endl;
                cout << (rand() % 31) + 6 << endl;

                cout << "Выиграл первый" << endl;
            }
            else { 

                cout << "Выиграл второй"<< endl; 
            }

        }break;


        default:
            break;
        }
        
    } while (true);
    return 0;
}