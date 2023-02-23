
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstdlib> 
#include <ctime> 
#include <cmath>

using namespace std;

void Pers(int pers, string pee) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    string Harry_Potter = "Гаррі Поттер";
    string Ronald_Weasley = "Рональд Візлі ";
    string Hermione_Granger = "Герміона Ґрейнджер";
    string Draco_Malfoy = "Драко Мелфой";
    string Albus_Dumbledore = "Албус Дамблдор";
    string Severus_Snape = "Северус Снейп";
    string Luna_Lovegood = "Луна Лавґуд";
    string Voldemort = "Волдеморт";

    if (pers > 8) {

        while (pers > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
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
    }

    switch (pers)
    {
    case 1:
    {
        pee = Harry_Potter;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Harry_Potter << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 2:
    {
        pee = Ronald_Weasley;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Ronald_Weasley << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 3:
    {
        pee = Hermione_Granger;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Hermione_Granger << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 4:
    {
        pee = Draco_Malfoy;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Draco_Malfoy << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 5:
    {
        pee = Albus_Dumbledore;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Albus_Dumbledore << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 6:
    {
        pee = Severus_Snape;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Severus_Snape << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    }break;
    case 7:
    {
        pee = Luna_Lovegood;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Luna_Lovegood << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 8:
    {
        pee = Voldemort;
        cout << " Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Voldemort << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    default: break;
    }
}
void HP(int HP1) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    if (HP1 == 100) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " -------------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 95) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 90) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " --";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------------------ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 85) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ---";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "----------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 80) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ----";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "---------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 75) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -----";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "--------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 70) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "-------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 65) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 60) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " --------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------------ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 55) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ---------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "----------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 50) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ----------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "---------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 45) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -----------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "--------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 40) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "-------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 35) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 30) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " --------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "------ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 25) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ---------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "----- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 20) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ----------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "---- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 15) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -----------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "--- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 10) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ------------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "-- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 5) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " -------------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "- ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }
    if (HP1 == 0) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " --------------------";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << HP1 << "%";
    }

}
void Kart(int R) {
    string Petrificus_Totalus = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Петрифікус Тоталус                     *\n"
        " *  закляття-тілов`яз – повністю           *\n"
        " *  знерухомлює тіло зачарованого.         *\n"
        " *                                         *\n"
        " *             Зачарований пропускає хід,  *\n"
        " *             якщо не відіб'є закляття.   *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Incendio = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Інсендіо                               *\n"
        " *  закляття, що викликає вогонь,          *\n"
        " *  який вилітає з палички.                *\n"
        " *                                         *\n"
        " *                                - 10 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Expeliarmus = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Експеліармус                           *\n"
        " *  призначається для роззброєння          *\n"
        " *  суперника. Виглядає воно як спалах     *\n"
        " *  червоного світла.                      *\n"
        " *  Експеліармус вибиває паличку з рук     *\n"
        " *  суперника, а інколи й відкидає його    *\n"
        " *  самого.                                *\n"
        " *                                         *\n"
        " *             Зачарований пропускає хід,  *\n"
        " *              якщо не відіб'є закляття.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Sectumsempra = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Сектумсепра                            *\n"
        " *  жорстоко ранить жертву, наче мечем.    *\n"
        " *  Це закляття винайдене Снейпом.         *\n"
        " *                                         *\n"
        " *                Якщо ваш персонаж        *\n"
        " *                Северус Снейп:  - 40 HP  *\n"
        " *                         Інші:  - 20 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Rictusempra = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Ріктумсепра                            *\n"
        " *  це закляття, що насилає нестерпний     *\n"
        " *  лоскіт на зачаклованого.               *\n"
        " *                                         *\n"
        " *                                 - 5 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Finite_Incantatem = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Фініте Інкантатем                      *\n"
        " *  зупиняє дію багатьох заклять           *\n"
        " *                                         *\n"
        " *                      Захисне закляття.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Serpensortia = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Серпенсортія                           *\n"
        " *  це закляття випускає змію з            *\n" 
        " *  кінчика чарівної палички.              *\n"
        " *  При цьому слід враховувати,            *\n"
        " *  щочаклун, який не знає парселмови      *\n"
        " *  не зможе її цілком контролювати.       *\n"
        " *                                         *\n"
        " *               Непередбачуване закляття  *\n"
        " *                             10 ~ 20 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Oblivion = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Забуттятус                             *\n"
        " *  заклинання, що “стирає” пам`ять        *\n"
        " *  зачаклованого.                         *\n"
        " *                                         *\n"
        " *             Зачарований пропускає хід.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Fire_frost = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Вогнеморозко                           *\n"
        " *  це заклинання, що захищає від          *\n"
        " *  вогню. Після накладення цього          *\n"
        " *  заклинання вогонь не завдає жодної     *\n"
        " *  шкоди, а лише лоскоче.                 *\n"
        " *                                         *\n"
        " *               Захисне закляття, діє     *\n"
        " *               тільки при  захисті від   *\n"
        " *                      вогняних заклять.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Expecto_patronum = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Експекто патронум                      *\n"
        " *  закляття, що викликає захисну форму    *\n"
        " *  – патронуса, який захищає виконавця,   *\n"
        " *  поки той сконцентрований.              *\n"
        " *                                         *\n"
        " *                      Захисне закляття.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Confundus = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Конфундус                              *\n"
        " *  (спантеличуючі чари) – закляття        *\n"
        " *  затуманює свідомість зачаклованого,    *\n"
        " *  спантеличує його.                      *\n"
        " *                                         *\n"
        " *                                 - 5 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Avis = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Авіс                                   *\n"
        " *  це заклинання, яке створює зграйку     *\n"
        " *  пташок, яка вилітає з палички          *\n"
        " *  виконавця                              *\n"
        " *                                         *\n"
        " *                                 - 5 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Avada_Kedavra = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Авада Кедавра                          *\n"
        " *  смертельне прокляття – вбиває жертву.  *\n"
        " *  Виглядає, як спалах зеленого світла.   *\n"
        " *  До цього закляття не існує             *\n"
        " *  контр-заклять.                         *\n"
        " *                                         *\n"
        " *                   Це закляття може      *\n"
        " *                   використовувати лише  *\n"
        " *                   персонаж Волдеморт.   *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Crucio = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Круціо                                 *\n"
        " *  закляття, що спричиняє нестерпний      *\n"
        " *  біль зачаклованому.                    *\n"
        " *                                         *\n"
        " *                                - 40 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Imperio = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Імперіо                                *\n"
        " *  (Імперіус) – закляття, яке дозволяє    *\n"
        " *  керувати вчинками і словами інших      *\n"
        " *                                         *\n"
        " *               Дозволяє використовувати  *\n"
        " *              закляття противника проти  *\n"
        " *              нього самого.              *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Reducto = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Редукто                                *\n"
        " *  вибухове закляття                      *\n"
        " *                                         *\n"
        " *                                 -20 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Protego = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Протеґо                                *\n"
        " *  закляття-щит – захищає чаклуна від     *\n"
        " *  більшості простих заклинань            *\n"
        " *                                         *\n"
        " *                      Захисне закляття.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string Agvamenti = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Аґваменті                              *\n"
        " *  закляття, що випускає струмінь води    *\n"
        " *  з чарівної палички                     *\n"
        " *                                         *\n"
        " *                                 -20 НР  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    string the_spell = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
        " *  Заклятус                               *\n"
        " *  приголомшуюче заклинання, яке на       *\n"
        " *  деякий час позбавляє свідомості        *\n"
        " *  зачаклованого.                         *\n"
        " *                                         *\n"
        " *             Зачарований пропускає хід.  *\n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ *\n"
    };
    if (R == 1) {
        cout << "" << endl;
        cout << Petrificus_Totalus << endl;
    }
    if (R == 2) {
        cout << "" << endl;
        cout << Incendio << endl;
    }
    if (R == 3) {
        cout << "" << endl;
        cout << Expeliarmus << endl;
    }
    if (R == 4) {
        cout << "" << endl;
        cout << Sectumsempra << endl;
    }
    if (R == 5) {
        cout << "" << endl;
        cout << Rictusempra << endl;
    }
    if (R == 6) {
        cout << "" << endl;
        cout << Finite_Incantatem << endl;
    }
    if (R == 7) {
        cout << "" << endl;
        cout << Serpensortia << endl;
    }
    if (R == 8) {
        cout << "" << endl;
        cout << Oblivion << endl;
    }
    if (R == 9) {
        cout << "" << endl;
        cout << Fire_frost << endl;
    }
    if (R == 10) {
        cout << "" << endl;
        cout << Expecto_patronum << endl;
    }
    if (R == 11) {
        cout << "" << endl;
        cout << Confundus << endl;
    }
    if (R == 12) {
        cout << "" << endl;
        cout << Avis << endl;
    }
    if (R == 13) {
        cout << "" << endl;
        cout << Avada_Kedavra << endl;
    }
    if (R == 14) {
        cout << "" << endl;
        cout << Crucio << endl;
    }
    if (R == 15) {
        cout << "" << endl;
        cout << Imperio << endl;
    }
    if (R == 16) {
        cout << "" << endl;
        cout << Reducto << endl;
    }
    if (R == 17) {
        cout << "" << endl;
        cout << Protego << endl;
    }
    if (R == 18) {
        cout << "" << endl;
        cout << Agvamenti << endl;
    }
    if (R == 19) {
        cout << "" << endl;
        cout << the_spell << endl;
    }
}
void Kart1(int R) {
    string Petrificus_Totalus = {
        "  Петрифікус Тоталус  "
    };
    string Incendio = {
        
        "  Інсендіо            "
        
    };
    string Expeliarmus = {
        
        "  Експеліармус        "
        
    };
    string Sectumsempra = {
        "  Сектумсепра         "
    };

    string Rictusempra = {

        "  Ріктумсепра         "
    };
    string Finite_Incantatem = {
        
        "  Фініте Інкантатем   "

    };
    string Serpensortia = {

        "  Серпенсортія        "
        
    };
    string Oblivion = {

        "  Забуттятус          "
       
    };
    string Fire_frost = {

        "  Вогнеморозко        "
        
    };
    string Expecto_patronum = {

        "  Експекто патронум   "
       
    };
    string Confundus = {

        "  Конфундус           "
       
    };
    string Avis = {

        "  Авіс                "
       
    };
    string Avada_Kedavra = {

        "  Авада Кедавра       "
        
    };
    string Crucio = {

        "  Круціо              "
        
    };
    string Imperio = {

        "  Імперіо             "
        
    };
    string Reducto = {

        "  Редукто             "
       
    };
    string Protego = {

        "  Протеґо             "
        
    };
    string Agvamenti = {

        "  Аґваменті           "
        
    };
    string the_spell = {

        "  Заклятус            "
        
    };
    if (R == 1) {
        cout << Petrificus_Totalus;
    }
    if (R == 2) {
        cout << Incendio;
    }
    if (R == 3) {
        cout << Expeliarmus;
    }
    if (R == 4) {
        cout << Sectumsempra;
    }
    if (R == 5) {
        cout << Rictusempra;
    }
    if (R == 6) {
        cout << Finite_Incantatem;
    }
    if (R == 7) {
        cout << Serpensortia;
    }
    if (R == 8) {
        cout << Oblivion;
    }
    if (R == 9) {
        cout << Fire_frost;
    }
    if (R == 10) {
        cout << Expecto_patronum;
    }
    if (R == 11) {
        cout << Confundus;
    }
    if (R == 12) {
        cout << Avis;
    }
    if (R == 13) {
        cout << Avada_Kedavra;
    }
    if (R == 14) {
        cout << Crucio;
    }
    if (R == 15) {
        cout << Imperio;
    }
    if (R == 16) {
        cout << Reducto;
    }
    if (R == 17) {
        cout << Protego;
    }
    if (R == 18) {
        cout << Agvamenti;
    }
    if (R == 19) {
        cout << the_spell;
    }
}
void Characters_1(int a) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    if (a == 1) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n" << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " *    1 ~ Гаррі Поттер         * \n" << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " *    2 ~ Рональд Візлі        * \n" << endl;
        cout << " *    3 ~ Герміона Ґрейнджер   * \n" << endl;
        cout << " *    4 ~ Драко Мелфой         * \n" << endl;
        cout << " *    5 ~ Албус Дамблдор       * \n" << endl;
        cout << " *    6 ~ Северус Снейп        * \n" << endl;
        cout << " *    7 ~ Луна Лавґуд          * \n" << endl;
        cout << " *    8 ~ Волдеморт            * \n" << endl;
        cout << " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n" << endl;
    }
       cout << " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n" << endl;
       cout << " *    1 ~ Гаррі Поттер         * \n" << endl;
       cout << " *    2 ~ Рональд Візлі        * \n" << endl;
       cout << " *    3 ~ Герміона Ґрейнджер   * \n" << endl;
       cout << " *    4 ~ Драко Мелфой         * \n" << endl;
       cout << " *    5 ~ Албус Дамблдор       * \n" << endl;
       cout << " *    6 ~ Северус Снейп        * \n" << endl;
       cout << " *    7 ~ Луна Лавґуд          * \n" << endl;
       cout << " *    8 ~ Волдеморт            * \n" << endl;
       cout << " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n" << endl;
}

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string Hogwarts = { 
        "                                                                       \n"
        "                                         <~~ Hogwarts.Student Wars ~~> \n" 
    };
    cout << Hogwarts << endl << endl << endl;
    string Harry_Potter = "Гаррі Поттер";
    string Ronald_Weasley = "Рональд Візлі ";
    string Hermione_Granger = "Герміона Ґрейнджер";
    string Draco_Malfoy = "Драко Мелфой";
    string Albus_Dumbledore = "Албус Дамблдор";
    string Severus_Snape = "Северус Снейп";
    string Luna_Lovegood = "Луна Лавґуд";
    string Voldemort = "Волдеморт";
    
    string Characters = {
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n"
        " *    1 ~ Гаррі Поттер         * \n"
        " *    2 ~ Рональд Візлі        * \n"
        " *    3 ~ Герміона Ґрейнджер   * \n"
        " *    4 ~ Драко Мелфой         * \n"
        " *    5 ~ Албус Дамблдор       * \n"
        " *    6 ~ Северус Снейп        * \n"
        " *    7 ~ Луна Лавґуд          * \n"
        " *    8 ~ Волдеморт            * \n"
        " * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ * \n"
    };
    string Pepe = {
        " Для вибору персонажа введіть відповідне число \n"
    };
    string Zak = {
        " Для використання закляття введіть відповідне число \n"
        " Для перегляду закляття введіть відповідне число два рази підряд \n"
    };
    string Propysk = {
        "Uhfdtwm"
    };
    string Petrificus_Totalus = {
        "  Петрифікус Тоталус  "
    };
    string Incendio = {
        "  Інсендіо            "
    };
    string Expeliarmus = {
        "  Експеліармус        "
    };
    string Sectumsempra = {
        "  Сектумсепра         "
    };
    string Rictusempra = {
        "  Ріктумсепра         "
    };
    string Finite_Incantatem = {
        "  Фініте Інкантатем   "
    };
    string Serpensortia = {
        "  Серпенсортія        "
    };
    string Oblivion = {
        "  Забуттятус          "
    };
    string Fire_frost = {
        "  Вогнеморозко        "
    };
    string Expecto_patronum = {
        "  Експекто патронум   "
    };
    string Confundus = {
        "  Конфундус           "
    };
    string Avis = {
        "  Авіс                "
    };
    string Avada_Kedavra = {
        "  Авада Кедавра       "
    };
    string Crucio = {
        "  Круціо              "
    };
    string Imperio = {
        "  Імперіо             "
    };
    string Reducto = {
        "  Редукто             "
    };
    string Protego = {
        "  Протеґо             "
    };
    string Agvamenti = {
        "  Аґваменті           "
    };
    string the_spell = {
        "  Заклятус            "
    };

    int pers1;
    int pers2;
    string play1;
    string play2;
    string p1;
    string p2;
    string pee1;
    string pee2;
   
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    system("cls");
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << "                                                       Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> p2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    srand(time(0));
    int r = rand() % 2 + 1;

    cout << endl;
    if (r == 1) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " Гра рандомно вибрала гравця "; 
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << p1;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " першим. " << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        play1 = p1;
        play2 = p2;
    }
    if (r == 2) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " Гра рандомно вибрала гравця ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << p2;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " першим. " << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        play1 = p2;
        play2 = p1;
    }

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << " ";
    system("pause");
    system("cls");

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " Гравець ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << "                                                       Гравець ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2 << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    cout << endl << endl;
    cout << Characters << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << Pepe << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << " Гравець ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " виберіть персонажа ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> pers1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    
    if (pers1 < 1 || pers1 > 8) {

        while (pers1 < 1 || pers1 > 8) {
            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "  Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers1;
        }
    }
    cout << endl;
    Pers(pers1, pee1);
    switch (pers1)
    {
    case 1:
    {
        pee1 = Harry_Potter;
    }break;
    case 2:
    {
        pee1 = Ronald_Weasley;
    }break;
    case 3:
    {
        pee1 = Hermione_Granger;
    }break;
    case 4:
    {
        pee1 = Draco_Malfoy;
    }break;
    case 5:
    {
        pee1 = Albus_Dumbledore;
    }break;
    case 6:
    {
        pee1 = Severus_Snape;

    }break;
    case 7:
    {
        pee1 = Luna_Lovegood;
    }break;
    case 8:
    {
        pee1 = Voldemort;
    }break;
    default: break;
    }
    cout << endl << endl << endl << endl << endl << endl;
    cout << " ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    system("pause");
    system("cls");
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1 ;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ " << pee1;
    cout << "                                                       Гравець ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2 << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    cout << endl << endl;
    cout << Characters << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << Pepe << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << " Гравець ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " виберіть персонажа ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> pers2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

   
   
    if (pers2 < 1 || pers2 > 8) {

        while (pers2 < 1 || pers2 > 8) {
            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << " Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cin >> pers2;
        }
    }
    if (pers1 == pers2) {
        while (pers1 == pers2) {
            cout << endl;
            cout << " Цей персонаж вибран іншим гравцем, виберіть іншого персонажа ~~> ";
            cin >> pers2;
            if (pers2 < 1 || pers2 > 8) {

                while (pers2 < 1 || pers2 > 8) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
                    cout << " Помилка. ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cin >> pers2;
                }
            }
        }
       
    }
    cout << endl;
    Pers(pers2, pee2);
    cout << endl << endl << endl << endl << endl << endl;
    cout << " ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    system("pause");
    system("cls");

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    switch (pers2)
    {
    case 1:
    {
        pee2 = Harry_Potter;
    }break;
    case 2:
    {
        pee2 = Ronald_Weasley;
    }break;
    case 3:
    {
        pee2 = Hermione_Granger;
    }break;
    case 4:
    {
        pee2 = Draco_Malfoy;
    }break;
    case 5:
    {
        pee2 = Albus_Dumbledore;
    }break;
    case 6:
    {
        pee2 = Severus_Snape;

    }break;
    case 7:
    {
        pee2 = Luna_Lovegood;
    }break;
    case 8:
    {
        pee2 = Voldemort;
    }break;
    default:
        break;
    }

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ " << pee1;
    cout << "                                                                 ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    cout << pee2 << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " Гра рандомно видає гравцю ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " 3 карти " << endl << endl;
    
    srand(time(0));
    int R1 = 6;
    int R2 = 5;
    int R3 = 4;
    Kart(R1);
    Kart(R2);
    Kart(R3);

    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " ";
    system("pause");
    system("cls");

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ " << pee1;
    cout << "                                                                 ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    cout << pee2 << endl << endl;

    cout << "" << endl;
    cout << " 1 "; 
    Kart1(R1);
    cout << endl;
    cout << " 2 ";
    Kart1(R2);
    cout << endl;
    cout << " 3 ";
    Kart1(R3);
    cout << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " Гра рандомно видає гравцю ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " 3 карти " << endl << endl;

    int R01 = 6;
    int R02 = 5;
    int R03 = 14;
    Kart(R01);
    Kart(R02);
    Kart(R03);

    int HP1 = 100;
    int HP2 = 100;
    int HPP = 0;
    int HPP2 = 0;
    cout << endl; 
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " ";
    system("pause");
    system("cls");

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ " << pee1;
    cout << "                                                                 ~ ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << " ~ ";
    cout << pee2 << endl << endl;

    HP(HP1);
    cout << "                                                            ";
    HP(HP2);
    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << "" << endl;
    cout << " 1 ";
    Kart1(R1); 
    cout << "                                                            ";
    cout << " 1 ";
    Kart1(R01);
    cout << endl;
    cout << " 2 ";
    Kart1(R2); 
    cout << "                                                            ";
    cout << " 2 ";
    Kart1(R02);
    cout << endl;
    cout << " 3 ";
    Kart1(R3); 
    cout << "                                                            ";
    cout << " 3 ";
    Kart1(R03);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << endl << endl;
    int i = 1;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n01 = 0;
    int n02 = 0;
    int n03 = 0;
    int num = 0;
    int num2 = 0;
    for (size_t a = 0; a < 3; a++)
    {
        cout << num << "  " << num2 <<  endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << Zak << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
        cin >> num;
        cout << endl;
        while (num == 11 || num == 22 || num == 33) {
            if (num == 11) {
                Kart(R1);
            }
            if (num == 22) {
                Kart(R2);
            }
            if (num == 33) {
                Kart(R3);
            }
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << " ";
            system("pause");
            system("cls");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << Hogwarts << endl << endl << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << play1;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ " << pee1;
            cout << "                                                                 ~ ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << play2;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ ";
            cout << pee2 << endl << endl;

            HP(HP1);
            cout << "                                                            ";
            HP(HP2);
            cout << endl;
            if (i == 1)
            {
                if (num == 11 || num == 22 || num == 33) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;

                }
                if (num == 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (num == 2) {
                    cout << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (num == 3) {
                    cout << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
            }
            if (i == 2) {
                if (n1 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n2 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n2 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n2 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n3 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n3 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n3 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
            }
            if (i == 3) {
                if (n1 >= 1 && n2 >= 1 && n01 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n01 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n02 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
            }
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl; 
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << Zak << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
            cin >> num;

        }
        if (num < 1 || num > 3 && num != 11 && num != 22 && num != 33) {
            while (num < 1 || num > 3 && num != 11 && num != 22 && num != 33) {
                cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                cin >> num;
            }
        }
        if (i == 1) {
            if (num == 1) {
                if (R1 == 1) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R1 == 2) {
                    HPP = 10;
                }
                if (R1 == 3) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R1 == 4) {
                    if (pers1 == 6) {
                        HPP = 40;
                    }
                    else {
                        HPP = 20;
                    }
                }
                if (R1 == 5) {
                    HPP = 5;
                }
                if (R1 == 6) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R1 == 7) {
                    HPP = rand() % 20 + 10;
                }
                if (R1 == 8) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
                if (R1 == 9) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R1 == 10) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R1 == 11) {
                    HPP = 5;
                }
                if (R1 == 12) {
                    HPP = 5;
                }
                if (R1 == 13) {
                    if (pers1 == 8) {
                        if (pers2 == 1) {
                            HPP = 0;
                        }
                        else {
                            HPP = 100;
                        }
                    }
                    else {
                        HPP = 0;
                    }
                }
                if (R1 == 14) {
                    HPP = 40;
                }
                if (R1 == 15) {
                    cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                    cout << " Введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n02++;
                    }
                    if (num == 2) {
                        n02++;
                    }
                    if (num == 3) {
                        n03++;
                    }
                }
                if (R1 == 16) {
                    HPP = 20;
                }
                if (R1 == 17) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R1 == 18) {
                    HPP = 20;
                }
                if (R1 == 19) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;

                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
            }
            if (num == 2) {
                if (R2 == 1) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R2 == 2) {
                    HPP = 10;
                }
                if (R2 == 3) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R2 == 4) {
                    if (pers1 == 6) {
                        HPP = 40;
                    }
                    else {
                        HPP = 20;
                    }
                }
                if (R2 == 5) {
                    HPP = 5;
                }
                if (R2 == 6) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R2 == 7) {
                    HPP = rand() % 20 + 10;
                }
                if (R2 == 8) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
                if (R2 == 9) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R2 == 10) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R2 == 11) {
                    HPP = 5;
                }
                if (R2 == 12) {
                    HPP = 5;
                }
                if (R2 == 13) {
                    if (pers1 == 8) {
                        if (pers2 == 1) {
                            HPP = 0;
                        }
                        else {
                            HPP = 100;
                        }
                    }
                    else {
                        HPP = 0;
                    }
                }
                if (R2 == 14) {
                    HPP = 40;
                }
                if (R2 == 15) {
                    cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                    cout << " Введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n02++;
                    }
                    if (num == 2) {
                        n02++;
                    }
                    if (num == 3) {
                        n03++;
                    }
                }
                if (R2 == 16) {
                    HPP = 20;
                }
                if (R2 == 17) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R2 == 18) {
                    HPP = 20;
                }
                if (R2 == 19) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;

                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
            }
            if (num == 3) {
                if (R3 == 1) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R3 == 2) {
                    HPP = 10;
                }
                if (R3 == 3) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }
                }
                if (R3 == 4) {
                    if (pers1 == 6) {
                        HPP = 40;
                    }
                    else {
                        HPP = 20;
                    }
                }
                if (R3 == 5) {
                    HPP = 5;
                }
                if (R3 == 6) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R3 == 7) {
                    HPP = rand() % 20 + 10;
                }
                if (R3 == 8) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
                if (R3 == 9) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R3 == 10) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R3 == 11) {
                    HPP = 5;
                }
                if (R3 == 12) {
                    HPP = 5;
                }
                if (R3 == 13) {
                    if (pers1 == 8) {
                        if (pers2 == 1) {
                            HPP = 0;
                        }
                        else {
                            HPP = 100;
                        }
                    }
                    else {
                        HPP = 0;
                    }
                }
                if (R3 == 14) {
                    HPP = 40;
                }
                if (R3 == 15) {
                    cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                    cout << " Введіть закляття яке хочете використати ~~ > ";
                    cin >> num;
                    if (num == 1) {
                        n02++;
                    }
                    if (num == 2) {
                        n02++;
                    }
                    if (num == 3) {
                        n03++;
                    }
                }
                if (R3 == 16) {
                    HPP = 20;
                }
                if (R3 == 17) {
                    cout << " Ви використали захисне закляття." << endl;
                    cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                }
                if (R3 == 18) {
                    HPP = 20;
                }
                if (R3 == 19) {
                    cout << " Гравець " << play2 << " пропускає хід. " << endl;
                    cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                    cin >> num;

                    if (num == 1) {
                        n1++;
                    }
                    if (num == 2) {
                        n2++;
                    }
                    if (num == 3) {
                        n3++;
                    }

                }
            }

            if (num == 1) {
                n1++;
            }
            if (num == 2) {
                n2++;
            }
            if (num == 3) {
                n3++;
            }
        }
        if (i == 2) {
            if (num == 1) {
                if (n1 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }

            }
            if (num2 == 1 && R01 == 6 || R02 == 6 || R03 == 6 || R01 == 10 || R02 == 10 || R03 == 10 || R01 == 17 || R02 == 17 || R03 == 17) {
                
                    if (num == 1) {
                        if (R1 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R1 == 2) {
                            HPP = 0;
                        }
                        if (R1 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R1 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R1 == 5) {
                            HPP = 0;
                        }
                        if (R1 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 7) {
                            HPP = 0;
                        }
                        if (R1 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R1 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 11) {
                            HPP = 0;
                        }
                        if (R1 == 12) {
                            HPP = 0;
                        }
                        if (R1 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R1 == 14) {
                            HPP = 0;
                        }
                        if (R1 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R1 == 16) {
                            HPP = 0;
                        }
                        if (R1 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 18) {
                            HPP = 0;
                        }
                        if (R1 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                    if (num == 2) {
                        if (R2 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R2 == 2) {
                            HPP = 0;
                        }
                        if (R2 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R2 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R2 == 5) {
                            HPP = 0;
                        }
                        if (R2 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 7) {
                            HPP = 0;
                        }
                        if (R2 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R2 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 11) {
                            HPP = 0;
                        }
                        if (R2 == 12) {
                            HPP = 0;
                        }
                        if (R2 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R2 == 14) {
                            HPP = 0;
                        }
                        if (R2 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R2 == 16) {
                            HPP = 0;
                        }
                        if (R2 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 18) {
                            HPP = 0;
                        }
                        if (R2 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                    if (num == 3) {
                        if (R3 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R3 == 2) {
                            HPP = 0;
                        }
                        if (R3 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R3 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R3 == 5) {
                            HPP = 0;
                        }
                        if (R3 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 7) {
                            HPP = 0;
                        }
                        if (R3 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R3 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 11) {
                            HPP = 0;
                        }
                        if (R3 == 12) {
                            HPP = 0;
                        }
                        if (R3 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R3 == 14) {
                            HPP = 0;
                        }
                        if (R3 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R3 == 16) {
                            HPP = 0;
                        }
                        if (R3 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 18) {
                            HPP = 0;
                        }
                        if (R3 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                
            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }
            if (num == 1) {
                n1++;
            }
            if (num == 2) {
                n2++;
            }
            if (num == 3) {
                n3++;
            }
        }
        if (i == 3) {
            if (num == 1) {
                if (n1 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                    if (num < 1 || num > 3) {
                        while (num < 1 || num > 3) {
                            cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                            cin >> num;
                        }
                    }
                }

            }
            if (num2 == 1 || num2 == 2 || num2 == 3) {
                if (R01 == 6 || R02 == 6 || R03 == 6 || R01 == 10 || R02 == 10 || R03 == 10 || R01 == 17 || R02 == 17 || R03 == 17) {
                    if (num == 1) {
                        if (R1 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R1 == 2) {
                            HPP = 0;
                        }
                        if (R1 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R1 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R1 == 5) {
                            HPP = 0;
                        }
                        if (R1 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 7) {
                            HPP = 0;
                        }
                        if (R1 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R1 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 11) {
                            HPP = 0;
                        }
                        if (R1 == 12) {
                            HPP = 0;
                        }
                        if (R1 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R1 == 14) {
                            HPP = 0;
                        }
                        if (R1 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R1 == 16) {
                            HPP = 0;
                        }
                        if (R1 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R1 == 18) {
                            HPP = 0;
                        }
                        if (R1 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                    if (num == 2) {
                        if (R2 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R2 == 2) {
                            HPP = 0;
                        }
                        if (R2 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R2 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R2 == 5) {
                            HPP = 0;
                        }
                        if (R2 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 7) {
                            HPP = 0;
                        }
                        if (R2 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R2 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 11) {
                            HPP = 0;
                        }
                        if (R2 == 12) {
                            HPP = 0;
                        }
                        if (R2 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R2 == 14) {
                            HPP = 0;
                        }
                        if (R2 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R2 == 16) {
                            HPP = 0;
                        }
                        if (R2 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R2 == 18) {
                            HPP = 0;
                        }
                        if (R2 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                    if (num == 3) {
                        if (R3 == 1) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R3 == 2) {
                            HPP = 0;
                        }
                        if (R3 == 3) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R3 == 4) {
                            if (pers1 == 6) {
                                HPP = 0;
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R3 == 5) {
                            HPP = 0;
                        }
                        if (R3 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 7) {
                            HPP = 0;
                        }
                        if (R3 == 8) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                        if (R3 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 11) {
                            HPP = 0;
                        }
                        if (R3 == 12) {
                            HPP = 0;
                        }
                        if (R3 == 13) {
                            if (pers1 == 8) {
                                if (pers2 == 1) {
                                    HPP = 0;
                                }
                                else {
                                    HPP = 100;
                                }
                            }
                            else {
                                HPP = 0;
                            }
                        }
                        if (R3 == 14) {
                            HPP = 0;
                        }
                        if (R3 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num;
                            if (num == 1) {
                                n02++;
                            }
                            if (num == 2) {
                                n02++;
                            }
                            if (num == 3) {
                                n03++;
                            }
                        }
                        if (R3 == 16) {
                            HPP = 0;
                        }
                        if (R3 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play2 << " не завдасть вам урону. " << endl;
                        }
                        if (R3 == 18) {
                            HPP = 0;
                        }
                        if (R3 == 19) {
                            cout << " Гравець " << play2 << " пропускає хід. " << endl;
                            cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num;

                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }

                        }
                    }
                }
            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }
            if (num == 1) {
                n1++;
            }
            if (num == 2) {
                n2++;
            }
            if (num == 3) {
                n3++;
            }
        }
        
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
        cout << " ";
        system("pause");
        system("cls");

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Hogwarts << endl << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << play1;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ " << pee1;
        cout << "                                                                 ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << play2;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ ";
        cout << pee2 << endl << endl;

        HP(HP1);
        cout << "                                                            ";
        HP2 = HP2 - HPP;
        HP(HP2);
        cout << endl;
        if (i == 1)
        {
            if (num == 11 || num == 22 || num == 33) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
                
            }
            if (n1 >= 1 && n2 < 1 && n3 < 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n3 < 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n2 < 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n2 >= 1 && n1 < 1 && n3 < 1) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n1 < 1) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
        }
        if (i == 2) {
            if (n1 >= 1 && n2 >= 1 && n01 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n02 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n03 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n01 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n02 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n03 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n01 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n02 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n03 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
        }
        if (i == 3) {

            if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1 ) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
        }
        
        cout << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << Zak << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";\
        cin >> num2;
        while (num2 == 11 || num2 == 22 || num2 == 33) {
            if (num2 == 11) {
                Kart(R01);
            }
            if (num2 == 22) {
                Kart(R02);
            }
            if (num2 == 33) {
                Kart(R03);
            }
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << " ";
            system("pause");
            system("cls");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << Hogwarts << endl << endl << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << play1;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ " << pee1;
            cout << "                                                                 ~ ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << play2;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " ~ ";
            cout << pee2 << endl << endl;

            HP(HP1);
            cout << "                                                            ";
            HP(HP2);
            cout << endl;
            if (i == 1)
            {
                if (num == 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (num == 2) {
                    cout << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (num == 3) {
                    cout << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
            }
            if (i == 2) {
                if (n1 >= 1 && n2 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n3 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n01 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n02 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n2 >= 1 && n3 >= 1 && n03 >= 1) {
                    cout << "" << endl;
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
            }
            if (i == 3) {

                if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
                if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " 1 ";
                    Kart1(R1);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << "                                                            ";
                    cout << " 1 ";
                    Kart1(R01);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " 2 ";
                    Kart1(R2);
                    cout << "                                                            ";
                    cout << " 2 ";
                    Kart1(R02);
                    cout << endl;
                    cout << " 3 ";
                    Kart1(R3);
                    cout << "                                                            ";
                    cout << " 3 ";
                    Kart1(R03);
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                    cout << endl;
                }
            }
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << Zak << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
            cin >> num2;

        }
        if (num2 < 1 || num2 > 3) {
            while (num2 < 1 || num2 > 3) {
                cout << "Такого закляття не існує, виберіть існуюче закляття ~ > ";
                cin >> num2;
            }
        }
        if (i == 1) {
            if (num == 1) {
                if (R1 == 6 || R1 == 10 || R1 == 17) {
                    if (num2 == 1) {
                        if (R01 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 2) {
                            HPP2 = 0;
                        }
                        if (R01 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 5) {
                            HPP2 = 0;
                        }
                        if (R01 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 7) {
                            HPP2 = 0;
                        }
                        if (R01 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 11) {
                            HPP2 = 0;
                        }
                        if (R01 == 12) {
                            HPP2 = 0;
                        }
                        if (R01 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 14) {
                            HPP2 = 0;
                        }
                        if (R01 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R01 == 16) {
                            HPP2 = 0;
                        }
                        if (R01 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 18) {
                            HPP2 = 0;
                        }
                        if (R01 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 2) {
                        if (R02 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 2) {
                            HPP2 = 0;
                        }
                        if (R02 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 5) {
                            HPP2 = 0;
                        }
                        if (R02 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 7) {
                            HPP2 = 0;
                        }
                        if (R02 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 11) {
                            HPP2 = 0;
                        }
                        if (R02 == 12) {
                            HPP2 = 0;
                        }
                        if (R02 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 14) {
                            HPP2 = 0;
                        }
                        if (R02 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R02 == 16) {
                            HPP2 = 0;
                        }
                        if (R02 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 18) {
                            HPP2 = 0;
                        }
                        if (R02 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 3) {
                        if (R03 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 2) {
                            HPP2 = 0;
                        }
                        if (R03 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 5) {
                            HPP2 = 0;
                        }
                        if (R03 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 7) {
                            HPP2 = 0;
                        }
                        if (R03 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 11) {
                            HPP2 = 0;
                        }
                        if (R03 == 12) {
                            HPP2 = 0;
                        }
                        if (R03 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 14) {
                            HPP2 = 0;
                        }
                        if (R03 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R03 == 16) {
                            HPP2 = 0;
                        }
                        if (R03 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 18) {
                            HPP2 = 0;
                        }
                        if (R03 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                }
            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }

            if(num == 2) {
                if (R2 == 6 || R2 == 10 || R2 == 17) {
                    if (num2 == 1) {
                        if (R01 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 2) {
                            HPP2 = 0;
                        }
                        if (R01 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 5) {
                            HPP2 = 0;
                        }
                        if (R01 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 7) {
                            HPP2 = 0;
                        }
                        if (R01 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 11) {
                            HPP2 = 0;
                        }
                        if (R01 == 12) {
                            HPP2 = 0;
                        }
                        if (R01 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 14) {
                            HPP2 = 0;
                        }
                        if (R01 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R01 == 16) {
                            HPP2 = 0;
                        }
                        if (R01 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 18) {
                            HPP2 = 0;
                        }
                        if (R01 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 2) {
                        if (R02 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 2) {
                            HPP2 = 0;
                        }
                        if (R02 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 5) {
                            HPP2 = 0;
                        }
                        if (R02 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 7) {
                            HPP2 = 0;
                        }
                        if (R02 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 11) {
                            HPP2 = 0;
                        }
                        if (R02 == 12) {
                            HPP2 = 0;
                        }
                        if (R02 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 14) {
                            HPP2 = 0;
                        }
                        if (R02 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R02 == 16) {
                            HPP2 = 0;
                        }
                        if (R02 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 18) {
                            HPP2 = 0;
                        }
                        if (R02 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 3) {
                        if (R03 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 2) {
                            HPP2 = 0;
                        }
                        if (R03 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 5) {
                            HPP2 = 0;
                        }
                        if (R03 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 7) {
                            HPP2 = 0;
                        }
                        if (R03 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 11) {
                            HPP2 = 0;
                        }
                        if (R03 == 12) {
                            HPP2 = 0;
                        }
                        if (R03 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 14) {
                            HPP2 = 0;
                        }
                        if (R03 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R03 == 16) {
                            HPP2 = 0;
                        }
                        if (R03 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 18) {
                            HPP2 = 0;
                        }
                        if (R03 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                }

            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }
            if (num == 3) {
                if (R3 == 6 || R3 == 10 || R3 == 17) {
                    if (num2 == 1) {
                        if (R01 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 2) {
                            HPP2 = 0;
                        }
                        if (R01 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 5) {
                            HPP2 = 0;
                        }
                        if (R01 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 7) {
                            HPP2 = 0;
                        }
                        if (R01 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 11) {
                            HPP2 = 0;
                        }
                        if (R01 == 12) {
                            HPP2 = 0;
                        }
                        if (R01 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 14) {
                            HPP2 = 0;
                        }
                        if (R01 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R01 == 16) {
                            HPP2 = 0;
                        }
                        if (R01 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 18) {
                            HPP2 = 0;
                        }
                        if (R01 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 2) {
                        if (R02 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 2) {
                            HPP2 = 0;
                        }
                        if (R02 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 5) {
                            HPP2 = 0;
                        }
                        if (R02 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 7) {
                            HPP2 = 0;
                        }
                        if (R02 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 11) {
                            HPP2 = 0;
                        }
                        if (R02 == 12) {
                            HPP2 = 0;
                        }
                        if (R02 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 14) {
                            HPP2 = 0;
                        }
                        if (R02 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R02 == 16) {
                            HPP2 = 0;
                        }
                        if (R02 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 18) {
                            HPP2 = 0;
                        }
                        if (R02 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 3) {
                        if (R03 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 2) {
                            HPP2 = 0;
                        }
                        if (R03 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 5) {
                            HPP2 = 0;
                        }
                        if (R03 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 7) {
                            HPP2 = 0;
                        }
                        if (R03 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 11) {
                            HPP2 = 0;
                        }
                        if (R03 == 12) {
                            HPP2 = 0;
                        }
                        if (R03 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 14) {
                            HPP2 = 0;
                        }
                        if (R03 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R03 == 16) {
                            HPP2 = 0;
                        }
                        if (R03 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 18) {
                            HPP2 = 0;
                        }
                        if (R03 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                }
            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }
            if (num2 == 1) {
                n01++;
            }
            if (num2 == 2) {
                n02++;
            }
            if (num2 == 3) {
                n03++;
            }
        }
        if (i == 2) {
            if (num == 1 || num == 2 || num == 3) {
                if (R1 == 6 || R2 == 6 || R3 == 6 || R1 == 10 || R2 == 10 || R3 == 10 || R1 == 17 || R2 == 17 || R3 == 17) {
                    if (num2 == 1) {
                        if (R01 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 2) {
                            HPP2 = 0;
                        }
                        if (R01 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 5) {
                            HPP2 = 0;
                        }
                        if (R01 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 7) {
                            HPP2 = 0;
                        }
                        if (R01 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R01 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 11) {
                            HPP2 = 0;
                        }
                        if (R01 == 12) {
                            HPP2 = 0;
                        }
                        if (R01 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R01 == 14) {
                            HPP2 = 0;
                        }
                        if (R01 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R01 == 16) {
                            HPP2 = 0;
                        }
                        if (R01 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R01 == 18) {
                            HPP2 = 0;
                        }
                        if (R01 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 2) {
                        if (R02 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 2) {
                            HPP2 = 0;
                        }
                        if (R02 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 5) {
                            HPP2 = 0;
                        }
                        if (R02 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 7) {
                            HPP2 = 0;
                        }
                        if (R02 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R02 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 11) {
                            HPP2 = 0;
                        }
                        if (R02 == 12) {
                            HPP2 = 0;
                        }
                        if (R02 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R02 == 14) {
                            HPP2 = 0;
                        }
                        if (R02 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R02 == 16) {
                            HPP2 = 0;
                        }
                        if (R02 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R02 == 18) {
                            HPP2 = 0;
                        }
                        if (R02 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                    if (num2 == 3) {
                        if (R03 == 1) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 2) {
                            HPP2 = 0;
                        }
                        if (R03 == 3) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 4) {
                            if (pers2 == 6) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 5) {
                            HPP2 = 0;
                        }
                        if (R03 == 6) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 7) {
                            HPP2 = 0;
                        }
                        if (R03 == 8) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                        if (R03 == 9) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 10) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 11) {
                            HPP2 = 0;
                        }
                        if (R03 == 12) {
                            HPP2 = 0;
                        }
                        if (R03 == 13) {
                            if (pers2 == 8) {
                                if (pers1 == 1) {
                                    HPP2 = 0;
                                }
                                else {
                                    HPP2 = 100;
                                }
                            }
                            else {
                                HPP2 = 0;
                            }
                        }
                        if (R03 == 14) {
                            HPP2 = 0;
                        }
                        if (R03 == 15) {
                            cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                            cout << " Введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num == 1) {
                                n1++;
                            }
                            if (num == 2) {
                                n2++;
                            }
                            if (num == 3) {
                                n3++;
                            }
                        }
                        if (R03 == 16) {
                            HPP2 = 0;
                        }
                        if (R03 == 17) {
                            cout << " Ви використали захисне закляття." << endl;
                            cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                        }
                        if (R03 == 18) {
                            HPP2 = 0;
                        }
                        if (R03 == 19) {
                            cout << " Гравець " << play1 << " пропускає хід. " << endl;
                            cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                            cin >> num2;
                            if (num2 == 1) {
                                n01++;
                            }
                            if (num2 == 2) {
                                n02++;
                            }
                            if (num2 == 3) {
                                n03++;
                            }
                        }
                    }
                }
            }
            else {
                if (num2 == 1) {
                    if (R01 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 2) {
                        HPP2 = 10;
                    }
                    if (R01 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R01 == 5) {
                        HPP2 = 5;
                    }
                    if (R01 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R01 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R01 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 11) {
                        HPP2 = 5;
                    }
                    if (R01 == 12) {
                        HPP2 = 5;
                    }
                    if (R01 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R01 == 14) {
                        HPP2 = 40;
                    }
                    if (R01 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R01 == 16) {
                        HPP2 = 20;
                    }
                    if (R01 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R01 == 18) {
                        HPP2 = 20;
                    }
                    if (R01 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 2) {
                    if (R02 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 2) {
                        HPP2 = 10;
                    }
                    if (R02 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R02 == 5) {
                        HPP2 = 5;
                    }
                    if (R02 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R02 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R02 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 11) {
                        HPP2 = 5;
                    }
                    if (R02 == 12) {
                        HPP2 = 5;
                    }
                    if (R02 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R02 == 14) {
                        HPP2 = 40;
                    }
                    if (R02 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R02 == 16) {
                        HPP2 = 20;
                    }
                    if (R02 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R02 == 18) {
                        HPP2 = 20;
                    }
                    if (R02 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
                if (num2 == 3) {
                    if (R03 == 1) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 2) {
                        HPP2 = 10;
                    }
                    if (R03 == 3) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 4) {
                        if (pers2 == 6) {
                            HPP2 = 40;
                        }
                        else {
                            HPP2 = 20;
                        }
                    }
                    if (R03 == 5) {
                        HPP2 = 5;
                    }
                    if (R03 == 6) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 7) {
                        HPP2 = rand() % 20 + 10;
                    }
                    if (R03 == 8) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                    if (R03 == 9) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 10) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 11) {
                        HPP2 = 5;
                    }
                    if (R03 == 12) {
                        HPP2 = 5;
                    }
                    if (R03 == 13) {
                        if (pers2 == 8) {
                            if (pers1 == 1) {
                                HPP2 = 0;
                            }
                            else {
                                HPP2 = 100;
                            }
                        }
                        else {
                            HPP2 = 0;
                        }
                    }
                    if (R03 == 14) {
                        HPP2 = 40;
                    }
                    if (R03 == 15) {
                        cout << " Це закляття дозволяє використовувати закляття противника проти нього самого. " << endl;                   cin >> num;
                        cout << " Введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num == 1) {
                            n1++;
                        }
                        if (num == 2) {
                            n2++;
                        }
                        if (num == 3) {
                            n3++;
                        }
                    }
                    if (R03 == 16) {
                        HPP2 = 20;
                    }
                    if (R03 == 17) {
                        cout << " Ви використали захисне закляття." << endl;
                        cout << " Наступне закляття введенне гравцем " << play1 << " не завдасть вам урону. " << endl;
                    }
                    if (R03 == 18) {
                        HPP2 = 20;
                    }
                    if (R03 == 19) {
                        cout << " Гравець " << play1 << " пропускає хід. " << endl;
                        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
                        cin >> num2;
                        if (num2 == 1) {
                            n01++;
                        }
                        if (num2 == 2) {
                            n02++;
                        }
                        if (num2 == 3) {
                            n03++;
                        }
                    }
                }
            }
            if (num2 == 1) {
                n01++;
            }
            if (num2 == 2) {
                n02++;
            }
            if (num2 == 3) {
                n03++;
            }
        }
        if (i == 3) {
            if (num2 == 1) {
                if (n01 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 2) {
                if (n02 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 3) {
                if (n03 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 1) {
                n01++;
            }
            if (num2 == 2) {
                n02++;
            }
            if (num2 == 3) {
                n03++;
            }
        }
        

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << " ";
        system("pause");
        system("cls");


        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Hogwarts << endl << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << play1;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ " << pee1;
        cout << "                                                                 ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << play2;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " ~ ";
        cout << pee2 << endl << endl;

        HP1 = HP1 - HPP2;
        HP(HP1);
        cout << "                                                            ";
        HP(HP2);
        cout << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        if (i == 1) {
            if (num == 1 && num2 == 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 1 && num2 == 2) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 1 && num2 == 3) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (num == 2 && num2 == 1) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 2 && num2 == 2) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 2 && num2 == 3) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (num == 3 && num2 == 1) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 3 && num2 == 2) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (num == 3 && num2 == 3) {
                cout << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }

        }
        if (i == 2) {
            if (n1 >= 1 && n2 >= 1 && n01 >= 1 && n02 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;        
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n01 >= 1 && n03 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n1 >= 1 && n2 >= 1 && n02 >= 1 && n03 >= 1) {
                cout << "" << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n2 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                cout << "" << endl;
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n01 >= 1 && n03 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
            if (n1 >= 1 && n3 >= 1 && n02 >= 1 && n03 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
        }
        if (i == 3) {
            if (n1 >= 1 && n2 >= 1 && n3 >= 1 && n01 >= 1 && n02 >= 1 && n03 >= 1) {
                cout << endl;
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                cout << " 1 ";
                Kart1(R1);
                cout << "                                                            ";
                cout << " 1 ";
                Kart1(R01);
                cout << endl;
                cout << " 2 ";
                Kart1(R2);
                cout << "                                                            ";
                cout << " 2 ";
                Kart1(R02);
                cout << endl;
                cout << " 3 ";
                Kart1(R3);
                cout << "                                                            ";
                cout << " 3 ";
                Kart1(R03);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
                cout << endl;
            }
        }
        i++;

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
        return 0;
}