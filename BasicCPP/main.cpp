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
    string Harry_Potter = "���� ������";
    string Ronald_Weasley = "������� ³�� ";
    string Hermione_Granger = "������� ���������";
    string Draco_Malfoy = "����� ������";
    string Albus_Dumbledore = "����� ��������";
    string Severus_Snape = "������� �����";
    string Luna_Lovegood = "���� �����";
    string Voldemort = "���������";

    if (pers > 8) {

        while (pers > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers;
        }
    }
    if (pers < 1) {

        while (pers < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers;
        }
    }

    switch (pers)
    {
    case 1:
    {
        pee = Harry_Potter;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Harry_Potter << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 2:
    {
        pee = Ronald_Weasley;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Ronald_Weasley << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 3:
    {
        pee = Hermione_Granger;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << Hermione_Granger << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 4:
    {
        pee = Draco_Malfoy;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Draco_Malfoy << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 5:
    {
        pee = Albus_Dumbledore;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << Albus_Dumbledore << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 6:
    {
        pee = Severus_Snape;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 10));
        cout << Severus_Snape << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    }break;
    case 7:
    {
        pee = Luna_Lovegood;
        cout << "�� ������� ��������� ~ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        cout << Luna_Lovegood << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }break;
    case 8:
    {
        pee = Voldemort;
        cout << "�� ������� ��������� ~ ";
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
        " |   ���������� �������                |\n"
        " |   ��������-����`�� � �������      |\n"
        " |   ����������� ��� ������������.    |\n"
        " |                                     |\n"
        " |           ����������� �������� ���,|\n"
        " |           ���� �� ���'� ��������. |\n"
        " 0-------------------------------------0\n"
    };
    string Incendio = {
        " 0-------------------------------------0\n"
        " |   �������                          |\n"
        " |   ��������, �� ������� ������,     |\n"
        " |   ���� ����� � �������.           |\n"
        " |                           - 5 ��    |\n"
        " 0-------------------------------------0\n"
    };
    string Expeliarmus = {
        " 0----------------------------------------0\n"
        " |   �����������                         |\n"
        " |   ������������ ��� ����������        |\n"
        " |   ���������. ������� ���� �� ������   |\n"
        " |   ��������� �����.                    |\n"
        " |   ����������� ������ ������� � ���   |\n"
        " |   ���������, � ������ � ������ ����  |\n"
        " |   ������.                              |\n"
        " |                      ������� ��������. |\n"
        " 0----------------------------------------0\n"
    };
    string Sectumsempra = {
        " 0----------------------------------------0\n"
        " |   �����������                          |\n"
        " |   ����������� � �������� ������ ������,|\n"
        " |   ���� �����. �� �������� ���������    |\n"
        " |   ��������� �������                    |\n"
        " |                     ���� ��� ��������  |\n"
        " |                ������� �����:  - 30 HP |\n"
        " |                         ����:  - 20 �� |\n"
        " 0----------------------------------------0\n"
    };

    string Rictusempra = {

        " 0----------------------------------------0\n"
        " |    г���������                         |\n"
        " |    г��������� � �� ��������, ��       |\n"
        " |    ������ ���������� ����� ��        |\n"
        " |    �������������.                      |\n"
        "                                   - 1 �� |\n"
        " 0----------------------------------------0\n"
    };
    string Finite_Incantatem = {
        " 0----------------------------------------0\n"
        " |     Գ��� ����������                  |\n"
        " |     ������� �� �������� �������       |\n"
        " |                     ������� ��������.  |\n"
        " 0----------------------------------------0\n"
    };
    string Serpensortia = {

        " 0----------------------------------------0\n"
        " |     �����������                       |\n"
        " |     �� �������� ������� ��� �        |\n" 
        " |     ������ ������ �������.          |\n"
        " |     ��� ����� ��� �����������,        |\n"
        " |     ��������, ���� �� ��� ����������  |\n"
        " |     �� ����� �� ������ ������������.   |\n"
        " |                               - 10 ��  |\n"
        " |                               - 20 ��  |\n"
        " 0----------------------------------------0\n"
    };
    string Oblivion = {

        " 0----------------------------------------0\n"
        " |     ����������                         |\n"
        " |     ����������, �� �����ດ ���`���    |\n"
        " |     �������������.                     |\n"
        " |               ��������� �������� ���, |\n"
        " |               ��������� �� �� �����.   |\n"
        " 0----------------------------------------0\n"
    };
    string Fire_frost = {

        " 0----------------------------------------0\n"
        " |     ������������                       |\n"
        " |     �� ����������, �� ������ ��      |\n"
        " |     �����. ϳ��� ���������� �����      |\n"
        " |     ���������� ������ �� ����� ����� |\n"
        " |     �����, � ���� �������.             |\n"
        " |                      ������� ��������, |\n"
        " |                䳺 ����� ���  ������ |\n"
        " |                �� �������� �������.   |\n"
        " 0----------------------------------------0\n"
    };
    string Expecto_patronum = {
        " 0----------------------------------------0\n"
        " |    �������� ��������                   |\n"
        " |    ��������, �� ������� ������� ����� |\n"
        " |    � ���������, ���� ������ ���������,|\n"
        " |    ���� ��� ���������������.           |\n"
        " |                      ������� ��������. |\n"
        " 0----------------------------------------0\n"
    };
    string Confundus = {
        " 0----------------------------------------0\n"
        " |    ���������                           |\n"
        " |    (������������� ����) � ��������     |\n"
        " |    ��������� �������� �������������, |\n"
        " |    ���������� ����                    |\n"
        "                                  - 5 ��  |\n"
        " 0----------------------------------------0\n"
    };
    string Action = {
        " 0----------------------------------------0\n"
        " |    �����                               |\n"
        " |    ����������-���������� � �������    |\n"
        " |    ������ �������� �� ���������       |\n"
        " |    ����� ���, ���� ���� �����������  |\n"
        " |    �� ������ ������, ��� �� �������|\n"
        " |    �����-����������                    |\n"
        " 0----------------------------------------0\n"
    };
    string Morsmordre = {
        " 0----------------------------------------0\n"
        " |    ����������                          |\n"
        " |    (����� ̳���) � ������� ����       |\n"
        " |    ����������                          |\n"
        " 0----------------------------------------0\n"
    };
    string Avis = {
        " 0----------------------------------------0\n"
        " |    ���                                |\n"
        " |    �� ����������, ��� ������� �������  |\n"
        " |    ������, ��� ����� � �������       |\n"
        " |    ���������                           |\n"
        " |                                - 5 ��  |\n"
        " 0----------------------------------------0\n"
    };
    string Avada_Kedavra = {
        " 0----------------------------------------0\n"
        " |   ����� �������                        |\n"
        " |   ���������� ��������� � ����� ������.|\n"
        " |   �������, �� ������ �������� �����. |\n"
        " |   �� ����� �������� �� ����           |\n"
        " |   �����-�������.                       |\n"
        " |   �� �������� ���� ���������������     |\n"
        " |   ���� �������� ���������              |\n"
        " 0----------------------------------------0\n"
    };
    string Crucio = {
        " 0----------------------------------------0\n"
        " |   ������                               |\n"
        " |   ��������, �� ��������� ����������    |\n"
        " |   ��� �������������.                  |\n"
        " |                                - 40 �� |\n"
        " 0----------------------------------------0\n"
    };
    string Imperio = {
        " 0----------------------------------------0\n"
        " |   ������                              |\n"
        " |   (�������) � ��������, ��� ��������  |\n"
        " |   �������� �������� � ������� �����    |\n"
        " |               �������� ��������������� |\n"
        " |              �������� ���������� ����� |\n"
        " |              ����� ������.             |\n"
        " 0----------------------------------------0\n"
    };
    string Reducto = {
        " 0----------------------------------------0\n"
        " |    �������                             |\n"
        " |    �������� ��������                   |\n"
        " |                                -25 ��  |\n"
        " 0----------------------------------------0\n"
    };
    string Protego = {
        " 0----------------------------------------0\n"
        " |    ������                             |\n"
        " |    ��������-��� � ������ ������� ��  |\n"
        " |    ������� ������� ���������         |\n"
        " |                       ������� ��������.|\n"
        " 0----------------------------------------0\n"
    };
    string Agvamenti = {
        " 0----------------------------------------0\n"
        " |    ��������                           |\n"
        " |    ��������, �� ������� ������� ���� |\n"
        " |    � ������ �������                  |\n"
        " |                                -20 ��  |\n"
        " 0----------------------------------------0\n"
    };
    string the_spell = {
        " 0----------------------------------------0\n"
        " |    ��������                            |\n"
        " |    ������������� ����������, ��� ��    |\n"
        " |    ������ ��� ��������� ��������     |\n"
        " |    �������������.                      |\n"
        " |               ��������� �������� ���. |\n"
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
        "  ���������� �������  "
    };
    string Incendio = {
        
        "  �������            "
        
    };
    string Expeliarmus = {
        
        "  �����������        "
        
    };
    string Sectumsempra = {
        "  �����������         "
    };

    string Rictusempra = {

        "  г���������         "
    };
    string Finite_Incantatem = {
        
        "  Գ��� ����������   "

    };
    string Serpensortia = {

        "  �����������        "
        
    };
    string Oblivion = {

        "  ����������          "
       
    };
    string Fire_frost = {

        "  ������������        "
        
    };
    string Expecto_patronum = {

        "  �������� ��������   "
       
    };
    string Confundus = {

        "  ���������           "
       
    };
    string Action = {

        "  �����               "
       
    };
    string Morsmordre = {

        "  ����������          "
        
    };
    string Avis = {

        "  ���                "
       
    };
    string Avada_Kedavra = {

        "  ����� �������       "
        
    };
    string Crucio = {

        "  ������              "
        
    };
    string Imperio = {

        "  ������             "
        
    };
    string Reducto = {

        "  �������             "
       
    };
    string Protego = {

        "  ������             "
        
    };
    string Agvamenti = {

        "  ��������           "
        
    };
    string the_spell = {

        "  ��������            "
        
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
    string Harry_Potter = "���� ������";
    string Ronald_Weasley = "������� ³�� ";
    string Hermione_Granger = "������� ���������";
    string Draco_Malfoy = "����� ������";
    string Albus_Dumbledore = "����� ��������";
    string Severus_Snape = "������� �����";
    string Luna_Lovegood = "���� �����";
    string Voldemort = "���������";
    
    string Characters = {
        " `````````````````````````````` \n"
        " `    1 - ���� ������        ` \n"
        " `    2 - ������� ³��       ` \n"
        " `    3 - ������� ���������  ` \n"
        " `    4 - ����� ������        ` \n"
        " `    5 - ����� ��������      ` \n"
        " `    6 - ������� �����       ` \n"
        " `    7 - ���� �����         ` \n"
        " `    8 - ���������           ` \n"
        " `````````````````````````````` \n"
    };
    string Petrificus_Totalus = {
        "  ���������� �������  "
    };
    string Incendio = {
        "  �������            "
    };
    string Expeliarmus = {
        "  �����������        "
    };
    string Sectumsempra = {
        "  �����������         "
    };
    string Rictusempra = {
        "  г���������         "
    };
    string Finite_Incantatem = {
        "  Գ��� ����������   "
    };
    string Serpensortia = {
        "  �����������        "
    };
    string Oblivion = {
        "  ����������          "
    };
    string Fire_frost = {
        "  ������������        "
    };
    string Expecto_patronum = {
        "  �������� ��������   "
    };
    string Confundus = {
        "  ���������           "
    };
    string Action = {
        "  �����               "
    };
    string Morsmordre = {
        "  ����������          "
    };
    string Avis = {
        "  ���                "
    };
    string Avada_Kedavra = {
        "  ����� �������       "
    };
    string Crucio = {
        "  ������              "
    };
    string Imperio = {
        "  ������             "
    };
    string Reducto = {
        "  �������             "
    };
    string Protego = {
        "  ������             "
    };
    string Agvamenti = {
        "  ��������           "
    };
    string the_spell = {
        "  ��������            "
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
    cout << " ������ ���� ��� ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cin >> p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    system("cls");
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << Hogwarts << endl << endl << endl;

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << " ������ ���� ��� ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << p1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << "                                                       ������ ���� ��� ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cin >> p2;
    srand(time(0));
    int r = rand() % 2 + 1;

    cout << endl;
    if (r == 1) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ��� �������� ������� ������ "; 
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << p1;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ������. " << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        play1 = p1;
        play2 = p2;
    }
    if (r == 2) {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ��� �������� ������� ������ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << p2;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << " ������. " << endl;
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
    cout << " ������� ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play1;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
    cout << "                                                       ������� ~~ > ";
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
    cout << play2 << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    cout << endl << endl;
    cout << Characters << endl;
    cout << " ������� " << play1 << " ������� ��������� ~~ > ";
    cin >> pers1;
    if (pers1 > 8) {

        while (pers1 > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
            cin >> pers1;
        }
    }
    if (pers1 < 1) {

        while (pers1 < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
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
    cout << "                                                       ������� ~~ > " << play2 << endl;

    cout << endl << endl;
    cout << Characters << endl;
    cout << "������� " << play2 << " ������� ���������: " << endl;
    cin >> pers2;

   
    if (pers2 > 8) {

        while (pers2 > 8) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers2;
        }
    }
    if (pers2 < 1) {

        while (pers2 < 1) {
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
            cout << "�������. ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << "������ ��������� ����, ��������� �� ��� ~~> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cin >> pers2;
        }
    }
    if (pers1 == pers2) {
        while (pers1 == pers2) {
            cout << "��� �������� ������ ����� �������, ������� ������ ��������� ~~> ";
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
    
    cout << "��� �������� ���� ������ " << play1 << " 3 ����� " << endl << endl;
    

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

    cout << " ��� �������� ���� ������ " << play2 << " 3 ����� " << endl << endl;


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
        cout << " ������� " << play1 << " ������ �������� ��� ������ ����������� ~~ > ";
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
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num;
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num;
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
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
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num;
                }
            }
            if (num == 2) {
                if (n2 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num;
                }
            }
            if (num == 3) {
                if (n3 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
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
        cout << " ������� " << play2 << " ������ �������� ��� ������ ����������� ~~ > ";
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
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 2) {
                if (n02 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 3) {
                if (n03 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
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
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 2) {
                if (n02 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
                    cin >> num2;
                }
            }
            if (num2 == 3) {
                if (n03 >= 1) {
                    cout << "�� �������� ��� ���� �����������, ������� ���� �������� ~ >";
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