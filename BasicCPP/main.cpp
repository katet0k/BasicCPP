#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <conio.h>
#include <sstream>
using namespace std;
struct Date {
    int day, month, year;

    Date() {
        time_t now = time(nullptr);
        tm* local_now = localtime(&now);
        day = local_now->tm_mday;
        month = local_now->tm_mon + 1;
        year = local_now->tm_year + 1900;
    }
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    string to_string() const {
        stringstream ss;
        ss << day << "." << month << "." << year;
        return ss.str();
    }
};
struct Man {
    string surname = "";
    string name = "";
    int age = 0;
    Date birth_date = Date();

    Man() {}

    Man(string s, string n, int a, Date b) {
        surname = s;
        name = n;
        age = a;
        birth_date = b;
    }

    string full_name() const {
        return surname + " " + name;
    }
};

bool compare_by_surname(const Man& m1, const Man& m2) {
    return m1.surname < m2.surname;
}


bool compare_by_name(const Man& m1, const Man& m2) {
    return m1.name < m2.name;
}

struct Student
{
    string surname;
    string group;
    int grades[5];
};

void print_excellent_students(Student* students, int count) {
    for (int i = 0; i < count; i++) {
        int excellent_grades = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] >= 90) {
                excellent_grades++;
            }
        }
        double excellent_percentage = (double)excellent_grades / 5.0 * 100.0;
        if (excellent_percentage > 75.0) {
            cout << students[i].surname << endl;
        }
    }
}

void print_fail_students(Student* students, int count) {
    for (int i = 0; i < count; i++) {
        int fail_grades = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] < 40) {
                fail_grades++;
            }
        }
        double fail_percentage = (double)fail_grades / 5.0 * 100.0;
        if (fail_percentage > 50.0) {
            cout << students[i].surname << endl;
        }
    }
}

int main()
{
    char switch_on;
    do
    {
        system("cls");
        cout << "\t\t\t\t\t#>-----------<MENU>----------<#" << endl;
        cout << "\t\t\t\t\t |         1 - Case 1       |" << endl;
        cout << "\t\t\t\t\t |         2 - Case 2       |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t\t\t |         0 - Exit         |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int count = 5;
            Student* students = new Student[count];
            students[0] = { "Ivanov", "A1", {80, 85, 90, 95, 100} };
            students[1] = { "Petrov", "A1", {60, 70, 80, 90, 100} };
            students[2] = { "Sidorov", "A2", {40, 50, 60, 70, 80} };
            students[3] = { "Kozlov", "A2", {50, 60, 70, 80, 90} };
            students[4] = { "Smirnov", "A3", {90, 90, 90, 90, 90} };

            cout << "Excellent students:" << endl;
            print_excellent_students(students, count);

            cout << "Fail students:" << endl;
            print_fail_students(students, count);

            delete[] students;
            system("pause");
        }break;
        case '2':
        {
            vector<Man> men;
            men.push_back(Man("Ivanov", "Ivan", 25, Date(1, 1, 1996)));
            men.push_back(Man("Petrov", "Peter", 30, Date(2, 2, 1991)));
            men.push_back(Man("Sidorov", "Sidor", 20, Date(3, 3, 2001)));
            men.push_back(Man("Zaycev", "Alexey", 40, Date(4, 4, 1981)));
            men.resize(5);
            sort(men.begin(), men.end(), compare_by_surname);
            cout << "List sorted by surname:" << endl;
            for (const auto& man : men)
            {
                cout << man.full_name() << " (age " << man.age << ", born " << man.birth_date.to_string() << ")" << endl;
            }
            system("pause");
        }break;
        }
    } while (true);
    return 0;
}