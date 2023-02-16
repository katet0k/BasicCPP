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
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Harry_Potter << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 2:
    {
        pee = Ronald_Weasley;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Ronald_Weasley << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 3:
    {
        pee = Hermione_Granger;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Hermione_Granger << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 4:
    {
        pee = Draco_Malfoy;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Draco_Malfoy << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 5:
    {
        pee = Albus_Dumbledore;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Albus_Dumbledore << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 6:
    {
        pee = Severus_Snape;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Severus_Snape << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    }break;
    case 7:
    {
        pee = Luna_Lovegood;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        cout << Luna_Lovegood << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 8:
    {
        pee = Voldemort;
        cout << "Ви вибрали персонажа ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        cout << Voldemort << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    default: break;
    }
}
void HP(int HP1) {
    if (HP1 == 100) {
        cout << " -------------------- " << HP1 << "%";
    }
    if (HP1 == 95) {
        cout << "  ------------------- " << HP1 << "%";
    }
    if (HP1 == 90) {
        cout << "   ------------------ " << HP1 << "%";
    }
    if (HP1 == 85) {
        cout << "    ----------------- " << HP1 << "%";
    }
    if (HP1 == 80) {
        cout << "     ---------------- " << HP1 << "%";
    }
    if (HP1 == 75) {
        cout << "      --------------- " << HP1 << "%";
    }
    if (HP1 == 70) {
        cout << "       -------------- " << HP1 << "%";
    }
    if (HP1 == 65) {
        cout << "        ------------- " << HP1 << "%";
    }
    if (HP1 == 60) {
        cout << "         ------------ " << HP1 << "%";
    }
    if (HP1 == 55) {
        cout << "          ----------- " << HP1 << "%";
    }
    if (HP1 == 50) {
        cout << "           ---------- " << HP1 << "%";
    }
    if (HP1 == 45) {
        cout << "            --------- " << HP1 << "%";
    }
    if (HP1 == 40) {
        cout << "             -------- " << HP1 << "%";
    }
    if (HP1 == 35) {
        cout << "              ------- " << HP1 << "%";
    }
    if (HP1 == 30) {
        cout << "               ------ " << HP1 << "%";
    }
    if (HP1 == 25) {
        cout << "                ----- " << HP1 << "%";
    }
    if (HP1 == 20) {
        cout << "                 ---- " << HP1 << "%";
    }
    if (HP1 == 15) {
        cout << "                  --- " << HP1 << "%";
    }
    if (HP1 == 10) {
        cout << "                   -- " << HP1 << "%";
    }
    if (HP1 == 5) {
        cout << "                    - " << HP1 << "%";
    }
    if (HP1 == 0) {
        cout << "                      " << HP1 << "%";
    }

}
void Kart(int R) {
    string Petrificus_Totalus = {
        " 0-------------------------------------0\n"
        " |   Петрифікус Тоталус                |\n"
        " |   Закляття-тілов`яз – повністю      |\n"
        " |   знерухомлює тіло зачарованого.    |\n"
        " |                                     |\n"
        " |           Зачарований пропускає хід,|\n"
        " |           якщо не відіб'є закляття. |\n"
        " 0-------------------------------------0\n"
    };
    string Incendio = {
        " 0-------------------------------------0\n"
        " |   Інсендіо                          |\n"
        " |   закляття, що викликає вогонь,     |\n"
        " |   який вилітає з палички.           |\n"
        " |                           - 5 НР    |\n"
        " 0-------------------------------------0\n"
    };
    string Expeliarmus = {
        " 0----------------------------------------0\n"
        " |   Експеліармус                         |\n"
        " |   призначається для роззброєння        |\n"
        " |   суперника. Виглядає воно як спалах   |\n"
        " |   червоного світла.                    |\n"
        " |   Експеліармус вибиває паличку з рук   |\n"
        " |   суперника, а інколи й відкидає його  |\n"
        " |   самого.                              |\n"
        " |                      Захисне закляття. |\n"
        " 0----------------------------------------0\n"
    };
    string Sectumsempra = {
        " 0----------------------------------------0\n"
        " |   Сектумсепра                          |\n"
        " |   Сектусемпра – жорстоко ранить жертву,|\n"
        " |   наче мечем. Це закляття винайдене    |\n"
        " |   Северусом Снейпом                    |\n"
        " |                     Якщо ваш персонаж  |\n"
        " |                Северус Снейп:  - 30 HP |\n"
        " |                         Інші:  - 20 НР |\n"
        " 0----------------------------------------0\n"
    };

    string Rictusempra = {

        " 0----------------------------------------0\n"
        " |    Ріктумсепра                         |\n"
        " |    Ріктумсепра – це закляття, що       |\n"
        " |    насилає нестерпний лоскіт на        |\n"
        " |    зачаклованого.                      |\n"
        "                                   - 1 НР |\n"
        " 0----------------------------------------0\n"
    };
    string Finite_Incantatem = {
        " 0----------------------------------------0\n"
        " |     Фініте Інкантатем                  |\n"
        " |     зупиняє дію багатьох заклять       |\n"
        " |                     Захисне закляття.  |\n"
        " 0----------------------------------------0\n"
    };
    string Serpensortia = {

        " 0----------------------------------------0\n"
        " |     Серпенсортія                       |\n"
        " |     це закляття випускає змію з        |\n" 
        " |     кінчика чарівної палички.          |\n"
        " |     При цьому слід враховувати,        |\n"
        " |     щочаклун, який не знає парселмови  |\n"
        " |     не зможе її цілком контролювати.   |\n"
        " |                               - 10 НР  |\n"
        " |                               - 20 НР  |\n"
        " 0----------------------------------------0\n"
    };
    string Oblivion = {

        " 0----------------------------------------0\n"
        " |     Забуттятус                         |\n"
        " |     заклинання, що “стирає” пам`ять    |\n"
        " |     зачаклованого.                     |\n"
        " |               Противник пропускає хід, |\n"
        " |               забуваючи що не ходив.   |\n"
        " 0----------------------------------------0\n"
    };
    string Fire_frost = {

        " 0----------------------------------------0\n"
        " |     Вогнеморозко                       |\n"
        " |     це заклинання, що захищає від      |\n"
        " |     вогню. Після накладення цього      |\n"
        " |     заклинання вогонь не завдає жодної |\n"
        " |     шкоди, а лише лоскоче.             |\n"
        " |                      Захисне закляття, |\n"
        " |                діє тільки при  захисті |\n"
        " |                від вогняних заклять.   |\n"
        " 0----------------------------------------0\n"
    };
    string Expecto_patronum = {
        " 0----------------------------------------0\n"
        " |    Експекто патронум                   |\n"
        " |    закляття, що викликає захисну форму |\n"
        " |    – патронуса, який захищає виконавця,|\n"
        " |    поки той сконцентрований.           |\n"
        " |                      Захисне закляття. |\n"
        " 0----------------------------------------0\n"
    };
    string Confundus = {
        " 0----------------------------------------0\n"
        " |    Конфундус                           |\n"
        " |    (спантеличуючі чари) – закляття     |\n"
        " |    затуманює свідомість зачаклованого, |\n"
        " |    спантеличує його                    |\n"
        "                                  - 5 НР  |\n"
        " 0----------------------------------------0\n"
    };
    string Action = {
        " 0----------------------------------------0\n"
        " |    Акціо                               |\n"
        " |    замовляння-викликання – викликає    |\n"
        " |    вказані предмети до виконавця       |\n"
        " |    навіть тоді, коли вони знаходяться  |\n"
        " |    на великій відстані, але не захищені|\n"
        " |    контр-закляттями                    |\n"
        " 0----------------------------------------0\n"
    };
    string Morsmordre = {
        " 0----------------------------------------0\n"
        " |    Морсмордре                          |\n"
        " |    (Чорна Мітка) – викликає знак       |\n"
        " |    Волдеморта                          |\n"
        " 0----------------------------------------0\n"
    };
    string Avis = {
        " 0----------------------------------------0\n"
        " |    Авіс                                |\n"
        " |    це заклинання, яке створює зграйку  |\n"
        " |    пташок, яка вилітає з палички       |\n"
        " |    виконавця                           |\n"
        " |                                - 5 НР  |\n"
        " 0----------------------------------------0\n"
    };
    string Avada_Kedavra = {
        " 0----------------------------------------0\n"
        " |   Авада Кедавра                        |\n"
        " |   смертельне прокляття – вбиває жертву.|\n"
        " |   Виглядає, як спалах зеленого світла. |\n"
        " |   До цього закляття не існує           |\n"
        " |   контр-заклять.                       |\n"
        " |   Це закляття може використовувати     |\n"
        " |   лише персонаж Волдеморт              |\n"
        " 0----------------------------------------0\n"
    };
    string Crucio = {
        " 0----------------------------------------0\n"
        " |   Круціо                               |\n"
        " |   закляття, що спричиняє нестерпний    |\n"
        " |   біль зачаклованому.                  |\n"
        " |                                - 40 НР |\n"
        " 0----------------------------------------0\n"
    };
    string Imperio = {
        " 0----------------------------------------0\n"
        " |   Імперіо                              |\n"
        " |   (Імперіус) – закляття, яке дозволяє  |\n"
        " |   керувати вчинками і словами інших    |\n"
        " |               Дозволяє використовувати |\n"
        " |              закляття противника проти |\n"
        " |              нього самого.             |\n"
        " 0----------------------------------------0\n"
    };
    string Reducto = {
        " 0----------------------------------------0\n"
        " |    Редукто                             |\n"
        " |    вибухове закляття                   |\n"
        " |                                -25 НР  |\n"
        " 0----------------------------------------0\n"
    };
    string Protego = {
        " 0----------------------------------------0\n"
        " |    Протеґо                             |\n"
        " |    закляття-щит – захищає чаклуна від  |\n"
        " |    більшості простих заклинань         |\n"
        " |                       Захисне закляття.|\n"
        " 0----------------------------------------0\n"
    };
    string Agvamenti = {
        " 0----------------------------------------0\n"
        " |    Аґваменті                           |\n"
        " |    закляття, що випускає струмінь води |\n"
        " |    з чарівної палички                  |\n"
        " |                                -20 НР  |\n"
        " 0----------------------------------------0\n"
    };
    string the_spell = {
        " 0----------------------------------------0\n"
        " |    Заклятус                            |\n"
        " |    приголомшуюче заклинання, яке на    |\n"
        " |    деякий час позбавляє свідомості     |\n"
        " |    зачаклованого.                      |\n"
        " |               Противник пропускає хід. |\n"
        " 0----------------------------------------0\n"
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
        cout << Action << endl;
    }
    if (R == 13) {
        cout << "" << endl;
        cout << Morsmordre << endl;
    }
    if (R == 14) {
        cout << "" << endl;
        cout << Avis << endl;
    }
    if (R == 15) {
        cout << "" << endl;
        cout << Avada_Kedavra << endl;
    }
    if (R == 16) {
        cout << "" << endl;
        cout << Crucio << endl;
    }
    if (R == 17) {
        cout << "" << endl;
        cout << Imperio << endl;
    }
    if (R == 18) {
        cout << "" << endl;
        cout << Reducto << endl;
    }
    if (R == 19) {
        cout << "" << endl;
        cout << Protego << endl;
    }
    if (R == 20) {
        cout << "" << endl;
        cout << Agvamenti << endl;
    }
    if (R == 21) {
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
    string Action = {

        "  Акціо               "
       
    };
    string Morsmordre = {

        "  Морсмордре          "
        
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
        cout << Action;
    }
    if (R == 13) {
        cout << Morsmordre;
    }
    if (R == 14) {
        cout << Avis;
    }
    if (R == 15) {
        cout << Avada_Kedavra;
    }
    if (R == 16) {
        cout << Crucio;
    }
    if (R == 17) {
        cout << Imperio;
    }
    if (R == 18) {
        cout << Reducto;
    }
    if (R == 19) {
        cout << Protego;
    }
    if (R == 20) {
        cout << Agvamenti;
    }
    if (R == 21) {
        cout << the_spell;
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
    string Voldemort = "Волдеморт";
    
    string Characters = {
        " `````````````````````````````` \n"
        " `    1 - Гаррі Поттер        ` \n"
        " `    2 - Рональд Візлі       ` \n"
        " `    3 - Герміона Ґрейнджер  ` \n"
        " `    4 - Драко Мелфой        ` \n"
        " `    5 - Албус Дамблдор      ` \n"
        " `    6 - Северус Снейп       ` \n"
        " `    7 - Луна Лавґуд         ` \n"
        " `    8 - Волдеморт           ` \n"
        " `````````````````````````````` \n"
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
    string Action = {
        "  Акціо               "
    };
    string Morsmordre = {
        "  Морсмордре          "
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
   
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    system("cls");
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << "                                                       Введіть ваше імя ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cin >> p2;
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
    cout << endl;
    cout << " ";
    system("pause");
    system("cls");

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " Гравець ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << "                                                       Гравець ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2 << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    cout << endl << endl;
    cout << Characters << endl;
    cout << " Гравець " << play1 << " виберіть персонажа ~~ > ";
    cin >> pers1;
    if (pers1 > 8) {

        while (pers1 > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cin >> pers1;
        }
    }
    if (pers1 < 1) {

        while (pers1 < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
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
    cout << endl;
    cout << " ";
    system("pause");
    system("cls");
    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                       Гравець ~~ > " << play2 << endl;

    cout << endl << endl;
    cout << Characters << endl;
    cout << "Гравець " << play2 << " виберіть персонажа: " << endl;
    cin >> pers2;

   
    if (pers2 > 8) {

        while (pers2 > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers2;
        }
    }
    if (pers2 < 1) {

        while (pers2 < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "Помилка. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "Такого персонажу немає, спробуйте ще раз ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers2;
        }
    }
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
    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                                   " << play2 << " ~~~ " << pee2 << endl;
    
    cout << "Гра рандомно видає гравцю " << play1 << " 3 карти " << endl << endl;
    

    srand(time(0));
    int R1 = rand() % 21 + 1;
    int R2 = rand() % 21 + 1;
    int R3 = rand() % 21 + 1;
    Kart(R1);
    Kart(R2);
    Kart(R3);

    cout << endl;
    cout << " ";
    system("pause");
    system("cls");
    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                                   " << play2 << " ~~~ " << pee2 << endl;
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

    cout << " Гра рандомно видає гравцю " << play2 << " 3 карти " << endl << endl;


    srand(time(0));
    int R01 = rand() % 21 + 1;
    int R02 = rand() % 21 + 1;
    int R03 = rand() % 21 + 1;
    Kart(R01);
    Kart(R02);
    Kart(R03);

    int HP1 = 100;
    int HP2 = 100;
    int HPP = 0;
    int HPP2 = 0;
    cout << endl;
    cout << " ";
    system("pause");
    system("cls");

    cout << Hogwarts << endl << endl << endl;
    cout << play1 << " ~~~ " << pee1;
    cout << "                                                                   " << play2 << " ~~~ " << pee2 << endl;
    cout << endl;
    HP(HP1);
    cout << "                                                            ";
    HP(HP2);
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
    for (size_t a = 0; a < 3; a++)
    {
        cout << i << endl;
        cout << " Гравець " << play1 << " введіть закляття яке хочете використати ~~ > ";
        int num;
        cin >> num;
        cout << endl;
        if (i == 1) {
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
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
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
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "Це закляття вже було використано, виберіть інше закляття ~ >";
                    cin >> num;
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
        if (num == 1) {
            if (R1 == 1) {
                HPP = 5;
            }
            if (R1 == 2) {
                HPP = 5;
            }
            if (R1 == 3) {
                HPP = 5;
            }
            if (R1 == 4) {
                HPP = 5;
            }
            if (R1 == 5) {
                HPP = 5;
            }
            if (R1 == 6) {
                HPP = 5;
            }
            if (R1 == 7) {
                HPP = 5;
            }
            if (R1 == 8) {
                HPP = 5;
            }
            if (R1 == 9) {
                HPP = 5;
            }
            if (R1 == 10) {
                HPP = 5;
            }
            if (R1 == 11) {
                HPP = 5;
            }
            if (R1 == 12) {
                HPP = 5;
            }
            if (R1 == 13) {
                HPP = 5;
            }
            if (R1 == 14) {
                HPP = 5;
            }
            if (R1 == 15) {
                HPP = 5;
            }
            if (R1 == 16) {
                HPP = 5;
            }
            if (R1 == 17) {
                HPP = 5;
            }
            if (R1 == 18) {
                HPP = 5;
            }
            if (R1 == 19) {
                HPP = 5;
            }
            if (R1 == 20) {
                HPP = 5;
            }
            if (R1 == 21) {
                HPP = 5;
            }
        }
        if (num == 2) {
            if (R2 == 1) {
                HPP = 25;
            }
            if (R2 == 2) {
                HPP = 25;
            }
            if (R2 == 3) {
                HPP = 25;
            }
            if (R2 == 4) {
                HPP = 25;
            }
            if (R2 == 5) {
                HPP = 5;
            }
            if (R2 == 6) {
                HPP = 5;
            }
            if (R2 == 7) {
                HPP = 5;
            }
            if (R2 == 8) {
                HPP = 5;
            }
            if (R2 == 9) {
                HPP = 5;
            }
            if (R2 == 10) {
                HPP = 5;
            }
            if (R2 == 11) {
                HPP = 5;
            }
            if (R2 == 12) {
                HPP = 5;
            }
            if (R2 == 13) {
                HPP = 5;
            }
            if (R2 == 14) {
                HPP = 5;
            }
            if (R2 == 15) {
                HPP = 5;
            }
            if (R2 == 16) {
                HPP = 5;
            }
            if (R2 == 17) {
                HPP = 5;
            }
            if (R2 == 18) {
                HPP = 5;
            }
            if (R2 == 19) {
                HPP = 5;
            }
            if (R2 == 20) {
                HPP = 5;
            }
            if (R2 == 21) {
                HPP = 5;
            }
        }
        if (num == 3) {
            if (R3 == 1) {
                HPP = 5;
            }
            if (R3 == 2) {
                HPP = 5;
            }
            if (R3 == 3) {
                HPP = 5;
            }
            if (R3 == 4) {
                HPP = 5;
            }
            if (R3 == 5) {
                HPP = 5;
            }
            if (R3 == 6) {
                HPP = 5;
            }
            if (R3 == 7) {
                HPP = 5;
            }
            if (R3 == 8) {
                HPP = 5;
            }
            if (R3 == 9) {
                HPP = 5;
            }
            if (R3 == 10) {
                HPP = 5;
            }
            if (R3 == 11) {
                HPP = 5;
            }
            if (R3 == 12) {
                HPP = 5;
            }
            if (R3 == 13) {
                HPP = 5;
            }
            if (R3 == 14) {
                HPP = 5;
            }
            if (R3 == 15) {
                HPP = 5;
            }
            if (R3 == 16) {
                HPP = 5;
            }
            if (R3 == 17) {
                HPP = 5;
            }
            if (R3 == 18) {
                HPP = 5;
            }
            if (R3 == 19) {
                HPP = 5;
            }
            if (R3 == 20) {
                HPP = 5;
            }
            if (R3 == 21) {
                HPP = 5;
            }
        }

        cout << " ";
        system("pause");
        system("cls");

        cout << Hogwarts << endl << endl << endl;
        cout << play1 << " ~~~ " << pee1;
        cout << "                                                                   " << play2 << " ~~~ " << pee2 << endl;
        cout << endl;
        HP(HP1);
        cout << "                                                            ";
        HP2 = HP2 - HPP;
        HP(HP2);
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
            if (n1 >= 1 && n2 >= 1 && n3 >= 1) {
                cout << endl;
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
        
        cout << endl;
        cout << " Гравець " << play2 << " введіть закляття яке хочете використати ~~ > ";
        int num2;
        cin >> num2;
        if (i == 1) {
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
        if (num2 == 1) {
            if (R01 == 1) {
                HPP2 = 5;
            }
            if (R01 == 2) {
                HPP2 = 5;
            }
            if (R01 == 3) {
                HPP2 = 5;
            }
            if (R01 == 4) {
                HPP2 = 5;
            }
            if (R01 == 5) {
                HPP2 = 5;
            }
            if (R01 == 6) {
                HPP2 = 5;
            }
            if (R01 == 7) {
                HPP2 = 5;
            }
            if (R01 == 8) {
                HPP2 = 5;
            }
            if (R01 == 9) {
                HPP2 = 5;
            }
            if (R01 == 10) {
                HPP2 = 5;
            }
            if (R01 == 11) {
                HPP2 = 5;
            }
            if (R01 == 12) {
                HPP2 = 5;
            }
            if (R01 == 13) {
                HPP2 = 5;
            }
            if (R01 == 14) {
                HPP2 = 5;
            }
            if (R01 == 15) {
                HPP2 = 5;
            }
            if (R01 == 16) {
                HPP2 = 5;
            }
            if (R01 == 17) {
                HPP2 = 5;
            }
            if (R01 == 18) {
                HPP2 = 5;
            }
            if (R01 == 19) {
                HPP2 = 5;
            }
            if (R01 == 20) {
                HPP2 = 5;
            }
            if (R01 == 21) {
                HPP2 = 5;
            }
        }
        if (num2 == 2) {
            if (R02 == 1) {
                HPP2 = 25;
            }
            if (R02 == 2) {
                HPP2 = 25;
            }
            if (R02 == 3) {
                HPP2 = 25;
            }
            if (R02 == 4) {
                HPP2 = 25;
            }
            if (R02 == 5) {
                HPP2 = 5;
            }
            if (R02 == 6) {
                HPP2 = 5;
            }
            if (R02 == 7) {
                HPP2 = 5;
            }
            if (R02 == 8) {
                HPP2 = 5;
            }
            if (R02 == 9) {
                HPP2 = 5;
            }
            if (R02 == 10) {
                HPP2 = 5;
            }
            if (R02 == 11) {
                HPP2 = 5;
            }
            if (R02 == 12) {
                HPP2 = 5;
            }
            if (R02 == 13) {
                HPP2 = 5;
            }
            if (R02 == 14) {
                HPP2 = 5;
            }
            if (R02 == 15) {
                HPP2 = 5;
            }
            if (R02 == 16) {
                HPP2 = 5;
            }
            if (R02 == 17) {
                HPP2 = 5;
            }
            if (R02 == 18) {
                HPP2 = 5;
            }
            if (R02 == 19) {
                HPP2 = 5;
            }
            if (R02 == 20) {
                HPP2 = 5;
            }
            if (R02 == 21) {
                HPP2 = 5;
            }
        }
        if (num2 == 3) {
            if (R03 == 1) {
                HPP2 = 5;
            }
            if (R03 == 2) {
                HPP2 = 5;
            }
            if (R03 == 3) {
                HPP2 = 5;
            }
            if (R03 == 4) {
                HPP2 = 5;
            }
            if (R03 == 5) {
                HPP2 = 5;
            }
            if (R03 == 6) {
                HPP2 = 5;
            }
            if (R03 == 7) {
                HPP2 = 5;
            }
            if (R03 == 8) {
                HPP2 = 5;
            }
            if (R03 == 9) {
                HPP2 = 5;
            }
            if (R03 == 10) {
                HPP2 = 5;
            }
            if (R03 == 11) {
                HPP2 = 5;
            }
            if (R03 == 12) {
                HPP2 = 5;
            }
            if (R03 == 13) {
                HPP2 = 5;
            }
            if (R03 == 14) {
                HPP2 = 5;
            }
            if (R03 == 15) {
                HPP2 = 5;
            }
            if (R03 == 16) {
                HPP2 = 5;
            }
            if (R03 == 17) {
                HPP2 = 5;
            }
            if (R03 == 18) {
                HPP2 = 5;
            }
            if (R03 == 19) {
                HPP2 = 5;
            }
            if (R03 == 20) {
                HPP2 = 5;
            }
            if (R03 == 21) {
                HPP2 = 5;
            }
        }
        system("pause");
        system("cls");

        cout << Hogwarts << endl << endl << endl;
        cout << play1 << " ~~~ " << pee1;
        cout << "                                                                   " << play2 << " ~~~ " << pee2 << endl;
        cout << endl;
        HP1 = HP1 - HPP2;
        HP(HP1);
        cout << "                                                            ";
        HP(HP2);
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
            if (n1 >= 1 && n2 >= 1 && n3 >= 1) {
                cout << endl;
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
        i++;

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
        return 0;
}