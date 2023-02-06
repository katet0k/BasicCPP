#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char path[] = "file.txt";
    char text_p[255];
    FILE* file;
    string text, _mode;
    do {
        system("cls");
        cout << "File mode: " << endl;
        cout << "w - write " << endl;
        cout << "r - read " << endl;
        cout << "a - append " << endl;
        do {
            cout << "Input (w,r,a): ";
            cin >> _mode;
            if (_mode[0] == 'w' || _mode[0] == 'r' || _mode[0] == 'a')
            {
                break;
            }
            else {
                cout << "Error! Incorrect file mode!" << endl;
            }
        } while (true);
        cin.ignore();
        if ((file = fopen(path, _mode.c_str())) == NULL)
        {
            perror("Error occured while opening.txt");
        }
        else {
            switch (_mode[0])
            {
            case 'w':
            {
                cout << "Input: ";
                gets_s(text_p);
                fprintf(file, "%s", text_p);
                fprintf(file, "%c", '\n');
            }break;
            case 'a':
            {
                cout << "Input: ";
                gets_s(text_p);
                fprintf(file, "%s", text_p);
                fprintf(file, "%c", '\n');
            }break;
            case 'r':
            {
                while (fgets(text_p, 255, file))
                {
                    cout << text_p;
                }
            }break;
            }
            std::fclose(file);
        }
        system("pause");
    } while (true);
    return 0;
}