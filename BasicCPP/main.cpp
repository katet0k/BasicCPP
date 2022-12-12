#include <iostream>
#include <string>
#include <string.h>
#include <Windows.h>
#include <iomanip>
using namespace std;

struct Name
{

public:
    string name;
    uint32_t kod;
    uint32_t Series;
    void Output()
    {
        

        name = "Apple iPhone 14 128GB Midnight (MPUF3RX/A)";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << name << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << setw(90) <<" Код: ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << kod << endl << endl;
        cout << " Серія ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_____________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "iPhone " << Series << endl;
    }
    void Input() {
        Series = 14;
        kod = 352486566;
    }
};

struct Standard
{
public:
    string standard2G;
    string standard3G;
    string standard4G;
    string standard5G;

    void Output()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        
        cout << " Стандарт зв'язку ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << standard2G << endl;
        cout << setw(73) << standard3G << endl;
        cout << setw(61) << standard4G << endl;
        cout << setw(55) << standard5G << endl;
    }
    void Input() {
        standard2G = "2G (GPRS / EDGE)";
        standard3G = "3G (WCDMA/UMTS/HSPA)";
        standard4G = "4G (LTE)";
        standard5G = "5G";
    }
};

struct Display
{
    string Diagonal;
    string resolution;
    string Matrix_type;
    uint32_t Screen_refresh_rate;
    uint32_t Number_of_touch_points;
    string Screen_material;
    void Output()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Діагональ екрана ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Diagonal << endl;

        cout << " Роздільна здатність дисплея ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << resolution << endl;

        cout << " Тип матриці ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Matrix_type << endl;

        cout << " Частота оновлення екрана ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Screen_refresh_rate << endl;

        cout << " Кількість точок дотику ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Number_of_touch_points << endl;

        cout << " Матеріал екрана ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Screen_material << endl;

    }
    void Input()
    {
        Diagonal = "6.1";
        resolution = "2532x1170";
        Matrix_type = "OLED (Super Retina XDR)";
        Screen_refresh_rate = 60;
        Number_of_touch_points = 10;
        Screen_material = "Ceramic Shield";
    }
};

struct SIM 
{
    uint32_t Number_of_SIM_cards;
    string SIM_card_dimensions;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        cout << " Кількість SIM-карток ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "______________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Number_of_SIM_cards << endl;

        cout << " Розміри SIM-картки ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << SIM_card_dimensions << endl;
    }
    void Input() {
        Number_of_SIM_cards = 2;
        SIM_card_dimensions = "Nano-SIM";
    }
};

struct Memory_functions
{
    uint32_t Built_in_memory;
    string The_maximum;
    void Output() {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Вбудована пам'ять ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Built_in_memory << "ГБ" << endl;

        cout << " Максимальний обсяг підтримуваної карти пам'яті ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << The_maximum << endl;

    }
    void Input() {
        Built_in_memory = 128;
        The_maximum = "Немає";
    }
};

struct Operating_system
{
    string op;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Операційна система ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << op << endl;
    }
    void Input() {
        op = "iOS";
    }
};

struct Front_camera {
    uint32_t Front_camera;
    string Features1;
    string Features2;
    string Features3;
    string Features4;
    string Features5;
    string Placement;
    string Type;
    string Front;
    string Additionally;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        cout << " Фронтальна камера ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Front_camera << " Мп " << endl;
        cout << " Особливості фронтальної камери ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Features1 << endl;
        cout << setw(61)<< Features2 << endl;
        cout << setw(74) << Features3 << endl;
        cout << setw(65) << Features4 << endl;
        cout << setw(71) << Features5 << endl;
        cout << " Розміщення фронтальної камери ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_____________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Placement << endl;
        cout << " Вид фронтального спалаху ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Type << endl;
        cout << " Запис відео фронтальної камери ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Front << endl;
        cout << " Додатково ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "Діафрагма f/1.9 / Автофокус із Focus Pixels / Шестиелементна лінза " << endl;
        cout << setw(115) << "/ Retina Flash / Deep Fusion / Портретний режим із розширеним " << endl;
        cout << setw(112) << "боке та контролем глибини / Портретне освітлення з шістьма " << endl;
        cout << setw(117) << "ефектами (природне, студійне, контурне, сценічне, сценічне моно," << endl;
        cout << setw(115) << "високоякісне моно) / Нічний режим / Широке захоплення кольорів" << endl; 
        cout << setw(113) << "для фотографій і Live Photos / Корекція лінзи / Автоматична " << endl;
        cout << setw(114) << "стабілізація зображення / Режим серійної зйомки / Запис відео" << endl;
        cout << setw(116) << " 4K зі швидкістю 24 кадр./с, 25 кадр./с, 30 кадр./с або 60 кадр." << endl;
        cout << setw(113) << "/с / Запис HD-відео 1080p зі швидкістю 25, 30 або 60 кадрів " << endl;
        cout << setw(115) << "в секунду / Кінематографічний режим до 4K HDR зі швидкістю 30 " << endl;
        cout << setw(113) << "кадрів/с / Запис HDR-відео з Dolby Vision до 4K зі швидкістю" << endl;
        cout << setw(116) << " 60 кадрів в секунду  / Підтримка уповільненого відео для 1080p " << endl;
        cout << setw(109) << "зі швидкістю 120 кадрів в секунду / Покадрове відео зі  " << endl;
        cout << setw(118) << "стабілізацією/ Нічний режим / Кінематографічна стабілізація відео" << endl;
        cout << setw(71) << "(4K, 1080p і 720p)" << endl;
    }
    void Input() {
        Front_camera = 12;
        Features1 = "Автофокус";
        Features2 = "Одинарна";
        Features3 = "Підтримка знімання 4К";
        Features4 = "Стабілізація";
        Features5 = "Фронтальний спалах";
        Placement = "Чубчик";
        Type = "Програмний";
        Front = "4K/3840x2160/стереозвук";
       
    }
};
struct Processor {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Main_camera {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Materials {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Connectors {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Navigation {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Dimensions {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct Additionally {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};
struct general_сharacteristics {

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << "  ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
    void Input() {

    }
};

struct iPhone 
{
private:
    Name name_;
    Standard standard;
    Display display;
    SIM sim;
    Memory_functions memory;
    Operating_system operat;
    Front_camera Fcamera;
    Processor processor;
    Main_camera Mcamera;
    Materials materials;
    Connectors connectors;
    Navigation navigation;
    Dimensions dimensions;
    Additionally additionally;
    general_сharacteristics general_с;

public:
    void Output()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        
        name_.Output();
        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Стандарт зв'язку/інтернет " << endl << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        standard.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Дисплей " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        display.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " SIM-картки " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        sim.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Функції пам'яті " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        memory.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Операційна система " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        operat.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Фронтальна камера " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        Fcamera.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Процесор " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        processor.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Основна камера " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        Mcamera.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Матеріали " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        materials.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Роз'єми " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        connectors.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Навігація " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        navigation.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Розміри " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        dimensions.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " Додатково " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        additionally.Output();

        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << " загальні характеристики " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        general_с.Output();

    }
    void Input()
    {
        name_.Input();
        standard.Input();
        display.Input();
        sim.Input();
        memory.Input();
        operat.Input();
        Fcamera.Input();
        processor.Input();
        Mcamera.Input();
        materials.Input();
        connectors.Input();
        navigation.Input();
        dimensions.Input();
        additionally.Input();
        general_с.Input();
    }
};
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    cout << endl;
    cout << " Характеристики Мобільний телефон ";
    iPhone* apple = new iPhone;
    apple->Input();
    apple->Output();
    
    return 0;
}