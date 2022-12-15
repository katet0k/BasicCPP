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
    double Diagonal;
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
        Diagonal = 6.1;
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
    string Name_of_the_processor;
    string Number_of_cores;
    string Apple_series;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Назва процесора ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Name_of_the_processor << endl;
        cout << " Кількість ядер ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Number_of_cores << endl;
        cout << " Серія Apple ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Apple_series << endl;
    }
    void Input() {
        Name_of_the_processor = "Apple A15 Bionic";
        Number_of_cores = "2+4";
        Apple_series = "Apple Ax Series";
    }
};
struct Main_camera {
    string Maincamera;
    string Features_of_the_main_camera1;
    string Features_of_the_main_camera2;
    string Features_of_the_main_camera3;
    string Features_of_the_main_camera4;
    string Features_of_the_main_camera5;
    string Features_of_the_main_camera6;
    uint32_t Number_of_main_cameras;
    string Record_video_of_the_main_camera;
    string Stabilization_method;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Основна камера ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Maincamera << endl;
        cout << " Особливості основної камери ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Features_of_the_main_camera1 << endl;
        cout << "                                                     " << Features_of_the_main_camera2 << endl;
        cout << "                                                     " << Features_of_the_main_camera3 << endl;
        cout << "                                                     " << Features_of_the_main_camera4 << endl;
        cout << "                                                     " << Features_of_the_main_camera5 << endl;
        cout << "                                                     " << Features_of_the_main_camera6 << endl;
        cout << " Кількість основних камер ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout <<  Number_of_main_cameras << endl;
        cout << " Запис відео основної камери ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Record_video_of_the_main_camera << endl;
        cout << " Додатково ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << "Камера: " << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "                                                     Основна 12 МП: 26 мм, діафрагма f/1.5, оптична стабілізація " << endl;
        cout << "                                                     зображення зі зсувом датчика, семиелементна лінза, 100% " << endl;
        cout << "                                                     Focus Pixels" << endl;
        cout << "                                                     Надширококутний 12 МП: 13 мм, діафрагма ƒ/2.4 і кут огляду 120°, " << endl;
        cout << "                                                     п’ятиелементний об’єктив" << endl;
        cout << "                                                     2x оптичне збільшення; цифрове збільшення до 5x" << endl;
        cout << "                                                     Кришка об'єктива з сапфірового скла" << endl;
        cout << "                                                     True Tone" << endl;
        cout << "                                                     Deep Fusion" << endl;
        cout << "                                                     Smart HDR 4" << endl;
        cout << "                                                     Портретний режим із розширеним боке та контролем глибини" << endl;
        cout << "                                                     Портретне освітлення з шістьма ефектами (природне, студійне," << endl;
        cout << "                                                     контурне, сценічне,сценічне моно, високоякісне моно)" << endl;
        cout << "                                                     Нічний режим" << endl;
        cout << "                                                     Панорама (до 63 Мп)" << endl;
        cout << "                                                     Фотографічні стилі" << endl;
        cout << "                                                     Широке захоплення кольорів для фотографій і Live Photos" << endl;
        cout << "                                                     Корекція об'єктива (Ultra Wide)" << endl;
        cout << "                                                     Розширена корекція ефекту червоних очей" << endl;
        cout << "                                                     Автоматична стабілізація зображення" << endl;
        cout << "                                                     Режим серійної зйомки" << endl;
        cout << "                                                     Геотегування фотографій" << endl;
        cout << "                                                     Формати зображень: HEIF і JPEG" << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 15));
        cout << "                                                     Знімання відео:" << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "                                                     Запис відео 4K зі швидкістю 24 кадр./с, 25 кадр./с, 30 кадр./с" << endl;
        cout << "                                                     або 60 кадр./с" << endl;
        cout << "                                                     Запис HD-відео 1080p зі швидкістю 25, 30" << endl;
        cout << "                                                     або 60 кадрів в секунду" << endl;
        cout << "                                                     Запис HD-відео 720p зі швидкістю 30 кадрів в секунду" << endl;
        cout << "                                                     Кінематографічний режим до 4K HDR зі швидкістю 30 кадрів/с" << endl;
        cout << "                                                     Режим Action до 2.8K при 60 кадрах в секунду" << endl;
        cout << "                                                     Запис HDR-відео з Dolby Vision до 4K зі швидкістю 60" << endl;
        cout << "                                                     кадрів в секунду" << endl;
        cout << "                                                     Підтримка уповільненого відео 1080p зі швидкістю 120" << endl;
        cout << "                                                     або 240 кадрів/с" << endl;
        cout << "                                                     Покадрове відео зі стабілізацією" << endl;
        cout << "                                                     Нічний режим Уповільнена зйомка" << endl;
        cout << "                                                     Відео QuickTake" << endl;
        cout << "                                                     Оптична стабілізація зображення зі зсувом датчика " << endl;
        cout << "                                                     для відео (основна)" << endl;
        cout << "                                                     2-кратне оптичне збільшення" << endl;
        cout << "                                                     Цифрове збільшення до 3х" << endl;
        cout << "                                                     Аудіо зум" << endl;
        cout << "                                                     True Tone" << endl;
        cout << "                                                     Кінематографічна стабілізація відео (4K, 1080p і 720p)" << endl;
        cout << "                                                     Безперервне відео з автофокусом" << endl;
        cout << "                                                     Робіть 8-мегапіксельні фотографії під час запису відео 4K" << endl;
        cout << "                                                     Зум під час відтворення" << endl;
        cout << "                                                     Формати записаного відео: HEVC і H.264" << endl;
        cout << "                                                     Стереозвук" << endl;

        cout << " Метод стабілізації ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Stabilization_method << endl;
    }
    void Input() {

        Maincamera = "12 Мп + 12 Мп";
        Features_of_the_main_camera1 = "Автофокус";
        Features_of_the_main_camera2 = "Підтримка знімання 4К";
        Features_of_the_main_camera3 = "Спалах";
        Features_of_the_main_camera4 = "Стабілізація";
        Features_of_the_main_camera5 = "Ультраширококутний об'єктив";
        Features_of_the_main_camera6 = "Ширококутний об'єктив";
        Number_of_main_cameras = 2;
        Record_video_of_the_main_camera = "4K/3840x2160/стереозвук";
        Stabilization_method = "Оптична";
    }
};
struct Materials {

    string Body_material;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Матеріал корпуса ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Body_material << endl;
    }
    void Input() {
        Body_material = "Алюміній + скло";
    }
};
struct Connectors {
    string connectors;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Роз'єми ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << connectors <<  endl;
    }
    void Input() {
        connectors = "Lightning";

    }
    
};
struct Navigation {
    string GPS1;
    string GPS2;
    string GPS3;
    string GPS4;
    string GPS5;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " GPS-навігація ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_____________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << GPS1 << endl;
        cout << "                                                     " << GPS2 << endl;
        cout << "                                                     " << GPS3 << endl;
        cout << "                                                     " << GPS4 << endl;
        cout << "                                                     " << GPS5 << endl;
    }
    void Input() {
        GPS1 = "A-GPS";
        GPS2 = "BDS";
        GPS3 = "GPS";
        GPS4 = "ГЛОНАСС";
        GPS4 = "Цифровий компас";
    }
};
struct Dimensions {
    uint32_t Weight;
    double Width;
    double Height;
    double Depth;

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Вага, г ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Weight <<  endl;
        cout << " Ширина ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Width << " мм" << endl;
        cout << " Висота ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Height << " мм" << endl;
        cout << " Глибина ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Depth << " мм" << endl;
    }
    void Input() {
        Weight = 172;
        Width = 71.5;
        Height = 146.7;
        Depth = 7.8;
    }
};
struct Additionally {
    string Security;
    string Degree_of_dust;
    string Sensors1;
    string Sensors2;
    string Sensors3;
    string Sensors4;
    string Sensors5;

    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Безпека ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Security << endl;
        cout << " Ступінь пило/вологозахисту ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Degree_of_dust << endl;
        cout << " Датчики ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "___________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Sensors1 << endl;
        cout << "                                                     " << Sensors2 << endl;
        cout << "                                                     " << Sensors3 << endl;
        cout << "                                                     " << Sensors4 << endl;
        cout << "                                                     " << Sensors5 << endl;
    }
    void Input() {
        Security = "Розблокування за обличчям";
        Degree_of_dust = "IP68";
        Sensors1 = "Акселерометр";
        Sensors2 = "Барометр";
        Sensors3 = "Гіроскоп";
        Sensors4 = "Датчик наближення";
        Sensors5 = "Датчик освітлення";
    }
};
struct general_сharacteristics {
    string Supply_set1;  
    string Supply_set2;
    string Supply_set3;
    string Wireless_technologies1;
    string Wireless_technologies2;
    string Wireless_technologies3;
    string Wireless_technologies4;
    string Equipment1;
    string Equipment2;
    string Equipment3;
    string Equipment4;
    string Form_factor;
    string Features_of_the_case1;
    string Features_of_the_case2;
    string Color;
    string Country_producer_of_the_product;
    string Brand_registration_country;
    string Guarantee;
    void Output() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Комплект постачання ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Supply_set1 << endl;
        cout << "                                                     " << Supply_set2 << endl;
        cout << "                                                     " << Supply_set3 << endl;
        cout << " Бездротові технології ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_____________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Wireless_technologies1 << endl;
        cout << "                                                     " << Wireless_technologies2 << endl;
        cout << "                                                     " << Wireless_technologies3 << endl;
        cout << "                                                     " << Wireless_technologies4 << endl;
        cout << " Оснащення ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Equipment1 << endl;
        cout << "                                                     " << Equipment2 << endl;
        cout << "                                                     " << Equipment3 << endl;
        cout << "                                                     " << Equipment4 << endl;
        cout << " Форм-фактор ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Form_factor << endl;
        cout << " Особливості корпусу ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_______________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Features_of_the_case1 << endl;
        cout << "                                                     " << Features_of_the_case2 << endl;
        cout << " Колір ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "_____________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Color << endl;
        cout << " Країна-виробник товару ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "____________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Country_producer_of_the_product << endl;
        cout << " Країна реєстрації бренду ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Brand_registration_country << endl;
        cout << " Гарантія ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << "__________________________________________ ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << Guarantee << endl;
    }
    void Input() {
        Supply_set1 = "Документація";
        Supply_set2 = "Кабель для синхронізації";
        Supply_set3 = "Телефон";
        Wireless_technologies1 = "Bluetooth 5.3";
        Wireless_technologies2 = "NFC";
        Wireless_technologies3 = "Wi-Fi";
        Wireless_technologies4 = "Безпровідна зарядка";
        Equipment1 = "Ліхтарик";
        Equipment2 = "Наявність фронтальної камери";
        Equipment3 = "Підтримка e-SIM";
        Equipment4 = "Швидке заряджання";
        Form_factor = "Моноблок";
        Features_of_the_case1 = "Безрамковий дисплей";
        Features_of_the_case2 = "Водонепроникні";
        Color = "Midnight";
        Country_producer_of_the_product = "Китай";
        Brand_registration_country = "США";
        Guarantee = "12 місяців";
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
        cout << " Загальні характеристики " << endl << endl;
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