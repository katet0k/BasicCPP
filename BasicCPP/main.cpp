#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
   

    do
    {
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        /*
        
        
        
        */
        system("pause");
        system("cls");
        cout << "    #==================MENU==================#" << endl;
        cout << "     |   1 - выводит на экран линию         |" << endl;
        cout << "     |      заданным символом.              |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   2 - игра Ђ убикиї.                 |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   3 - определ€ет минимальный и       |" << endl;
        cout << "     |      максимальный элементы.          |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   4 - определ€ет мес€ц, в котором    |" << endl;
        cout << "     |    прибыль была максимальной,        |" << endl;
        cout << "     |    и мес€ц, в котором прибыль        |" << endl;
        cout << "     |    была минимальной.                 |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   5 - там все написанно)             |" << endl;
        cout << "     |                                      |" << endl;
        cout << "    #========================================#" << endl;

        char switch_on;

        switch_on = _getch();
        switch (switch_on)
        {
        case '1':
        {
            int line, a;
            char s, speed;


            cout << "  ¬ведите символ : ";
            cin >> s;
            cout << "  ¬ведите длину линии : ";
            cin >> line;
            cout << "\n 1 - √оризонтальна€ \n 2 - ¬ертикальна€ лини€ \n\n ¬ыберите вариант : ";
            cin >> a;
            for (int i = 0; i < a; i++)
            {
                if (a > 2 || a < 1)
                {
                    cout << " “акой линии нету \n ¬ведите одну из предложеных ";
                    cin >> a;
                }
            }
            cout << "\n q - Ѕыстра€ \n w - Ќормальна€ \n e - ћедленна€ \n\n ¬ыберите вариант : ";
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

                            cout << "  “акой скорости нету \n ¬ведите одну из предложеных ";
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
                        cout << "  " << s;
                    }

                    else if (speed == 'w')
                    {
                        Sleep(200);
                        cout << "  " << s;
                    }

                    else if (speed == 'e')
                    {
                        Sleep(800);
                        cout << "  " << s;
                    }
                    for (int j = 0; j < line; j++) {

                        if (speed != 'q' && speed != 'w' && speed != 'e') {

                            cout << "  “акой скорости нету \n ¬ведите одну из предложеных ";
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

            int a = 0, b = 0;



            for (int i = 0; i < 3; i++)
            {


                int q = rand() % 6;
                srand(time(0));

                int w = rand() % 6;
                srand(time(0));

                int d;
                cout << "введите любое число ";
                cin >> d;

                if (q == 0) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 1) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 2) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 3) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *      |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|      *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 4) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 5) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 6) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }

                if (w == 0) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 1) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 2) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 3) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *      |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|      *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 4) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 5) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 6) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }

                if (q > w)
                {
                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));
                    cout << "  победил € " << endl;
                    a += 1;

                }

                else if (q < w)
                {
                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));
                    cout << " победили вы" << endl;
                    b += 1;
                }
                else if (q = w) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));

                    cout << "  ничь€ " << endl;
                    a += 1;
                    b += 1;
                }
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

            }

            if (a > b) {

                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));

                cout << "  победа за мной " << endl;
                break;
            }

            if (a < b) {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                cout << "  победа за вами " << endl;
                break;
            }
            if (a = b) {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                cout << "  победила дружба)) " << endl;
                break;
            }
            system("pause");
            system("cls");

        }break;

        case '3':
        {

            srand(time(0));
            const uint32_t size = 25;
            long long arr[size];

            for (int i = 0; i < size; i++)
            {
                arr[i] = -5 + rand() % 50;
            }
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << "  ";
            }
            cout << endl;

            long long max, min;
            max = min = arr[0];

            for (size_t i = 0; i < size; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
                if (max < arr[i])
                {
                    max = arr[i];
                }
            }
            cout << "Min = " << min << endl;
            cout << "Max = " << max << endl;

        }break;

        case '4':
        {


            const uint32_t a = 12;
            int b;
            long long arrA[a];

            for (int i = 0; i < a; i++)
            {
                if (i == 0) {
                    cout << " введите прибыль за €нварь мес€ц  ";
                }
                if (i == 1) {
                    cout << " введите прибыль за февраль мес€ц  ";
                }
                if (i == 2) {
                    cout << " введите прибыль за март мес€ц  ";
                }
                if (i == 3) {
                    cout << " введите прибыль за апрель мес€ц  ";
                }
                if (i == 4) {
                    cout << " введите прибыль за май мес€ц  ";
                }
                if (i == 5) {
                    cout << " введите прибыль за июнь мес€ц  ";
                }
                if (i == 6) {
                    cout << " введите прибыль за июль мес€ц  ";
                }
                if (i == 7) {
                    cout << " введите прибыль за август мес€ц  ";
                }
                if (i == 8) {
                    cout << " введите прибыль за сент€брь мес€ц  ";
                }
                if (i == 9) {
                    cout << " введите прибыль за окт€брь мес€ц  ";
                }
                if (i == 10) {
                    cout << " введите прибыль за но€брь мес€ц  ";
                }
                if (i == 11) {
                    cout << " введите прибыль за декабрь мес€ц  ";
                }

                cin >> b;
                arrA[i] = b;
            }

            cout << endl;

            int r1, r2;

            cout << " диапазон" << endl;
            cin >> r1;
            cin >> r2;
            for (int i = 0; i < r1; i++)
            {
                if (r1 < 1) {

                    cout << " нету такого мес€ца \n введите цыфру > 0 и < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
                if (r1 > 12) {

                    cout << " нету такого мес€ца \n введите цыфру > 0 и < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
            }
            for (int i = 0; i < r2; i++) {

                if (r2 > 12)
                {
                    cout << " нету такого мес€ца \n введите цыфру > 0 и < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
                if (r2 < 1)
                {
                    cout << " нету такого мес€ца \n введите цыфру > 0 и < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
            }
            if (r1 > r2)
            {
                int temp = r1;
                r1 = r2;
                r2 = temp;
            }

            int max = arrA[r1 - 1];
            int min = arrA[r1 - 1];

            for (int j = r1 - 1; j <= r2 - 1; j++)

            {
                if (min > arrA[j])
                {
                    min = arrA[j];
                }

                if (max < arrA[j]) {

                    max = arrA[j];
                }

            }

            cout << "Min: " << min << endl;
            cout << "Max: " << max << endl;



        }break;

        case '5': {
            const uint32_t a = 10;
            long long arr[a];
            for (int i = 0; i < a; i++) {

                arr[i] = rand() % 10 - 5;
            }
            for (int i = 0; i < a; i++) {

                cout << arr[i] << " ";

            }
            float sumneg = 0;

            for (int i = 0; i < a; i++) {

                if (arr[i] < 0) {

                    sumneg += arr[i];
                }
            }
            cout << " \n—умма отъемных элементов = " << sumneg << endl;

            int max = 0, min = 0, p = 1;

            for (int i = 1; i < a; i++) {

                if (arr[i] < arr[min])

                    min = i;

                if (arr[i] > arr[max])

                    max = i;

            }
            for (int i = max + 1; i < min; i++) {

                p *= arr[i];


            }cout << " \n—умма элементов между min и max = " << p << endl;
            int sump = arr[1];

            for (int i = 1; i < a; i++) {

                if (i % 2 != 0) {

                    sump *= arr[i];
                }
            }

            cout << " \nѕроизведение элементов с парными номерами = " << sump << endl;
            int sum = 0, acc = 0;

            bool started = false;

            for (int i = 0; i < a; i++) {

                if (arr[i] < 0) {

                    if (!started) {

                        acc = 0;

                        started = true;

                    }

                    else {

                        sum += acc;

                        acc = arr[i];

                    }

                }

                else

                    acc += arr[i];

            }
            cout << " \n—умму элементов, расположенных между первым и последним отрицательными элементами = " << sum << endl;

        }break;

        default:

            break;
        }

    } while (true);
    return 0;
}