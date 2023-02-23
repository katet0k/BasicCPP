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
    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU=====================#" << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  1 - З'ясувує, чи збігаються рядки файлів. | " << endl;
        cout << "     |    Якщо ні, то виводить рядок, який не     | " << endl;
        cout << "     |    збігається, з кожного файлу.            | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  2 - Записує в другий файл статистику      | " << endl;
        cout << "     |      першого.                              | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  3 - Шифрування Цезаря.                    | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |                                            | " << endl;
        cout << "    #==============================================#" << endl;
        cout << "     |   0 - Exit                                 |" << endl;
        cout << "    #==============================================#" << endl;

        cout << "\n --> ";
        switch_on = _getch();
        system("cls");
        cout << endl;

        switch (switch_on)
        {
        case '1':
        {
            string path1 = "File1.txt";
            string path2 = "File2.txt";
            ifstream input_file(path1);
            ofstream output_file(path2);
           
            if (!input_file || !output_file)
            {
                cout << "Could not open files\n";
                
            }

            string line;
            string last_line;

            while (getline(input_file, line)) {
                if (!input_file.eof()) {
                    output_file << line << "\n";
                }
                else {
                    last_line = line;
                }
            }

            input_file.close();
            output_file.close();

            if (!last_line.empty()) {
                cout << "Last line was \"" << last_line << "\" and is deleted\n";
            }
            else {
                cout << "File was empty, nothing deleted\n";
            }
            system("pause");

        }break;
        case '2':
        {
            string path1 = "File1.txt";
            ifstream input_file(path1);

            if (!input_file) {
                cout << "Could not open file\n";
                system("pause");
                break;
            }

            string line;
            size_t max_length = 0;

            while (getline(input_file, line)) {
                size_t length = line.length();
                if (length > max_length) {
                    max_length = length;
                }
            }

            input_file.close();

            if (max_length > 0) {
                cout << "Max length: " << max_length << "\n";
            }
            else {
                cout << "File was empty, max length is 0\n";
            }

            system("pause");
        }break;
        case '3':
        {
            string word_to_count = "example";
            string path1 = "File1.txt";
            ifstream input_file(path1);

            if (!input_file) {
                cout << "Could not open file " <<endl;
                system("pause");
                break;
            }

            string line;
            int count = 0;

            while (getline(input_file, line)) {
                size_t pos = 0;
                while ((pos = line.find(word_to_count, pos)) != pos) {
                    ++count;
                    pos += word_to_count.size();
                }
            }

            input_file.close();

            cout << "The word '" << word_to_count << "' appeared " << count << " times in the file " << path1 << endl;

            system("pause");
        }break;
        case '4':
        {
            string old_word, new_word, filename;
            cout << "Enter the name of the input file: ";
            cin >> filename;
            cout << "Enter the word to be replaced: ";
            cin >> old_word;
            cout << "Enter the new word: ";
            cin >> new_word;

            ifstream input_file(filename);
            if (!input_file) {
                cout << "Could not open file " << filename << endl;

                system("pause");
                break;
            }

            string line, new_file_contents;
            while (getline(input_file, line)) {
                size_t pos = 0;
                while ((pos = line.find(old_word, pos)) != pos) {
                    line.replace(pos, old_word.size(), new_word);
                    pos += new_word.size();
                }
                new_file_contents += line + '\n';
            }

            input_file.close();

            ofstream output_file(filename);
            if (!output_file) {
                cout << "Could not open file " << filename << " for writing" << endl;

                system("pause");
                break;
            }

            output_file << new_file_contents;
            output_file.close();

            cout << "All occurrences of '" << old_word << "' have been replaced with '" << new_word << "' in the file " << filename << endl;

            system("pause");
        }break;
        }

    } while (switch_on != '0');
    return 0;
}