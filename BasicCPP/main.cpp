#include <iostream>
#include <algorithm>
using namespace std;
struct Point //Entity
{
    int x;
    int y;
};
void update_point(Point* point)
{
    cout << "Enter x: ";
    cin >> point->x;
    cout << "Enter y: ";
    cin >> point->y;
}
void show_point(Point* point)
{
    cout << "x = " << point->x << endl;
    cout << "y = " << point->y << endl;
}
struct ShowPoint //Use Cases
{
    Point* point = nullptr;
    void (*action)(Point*);
};
int main()
{
    Point* poin1 = new Point();
    poin1->x = 3;
    poin1->y = 6;
    Point* poin2 = new Point();
    poin2->x = 2;
    poin2->y = 3;
    ShowPoint* showPoint = new ShowPoint;
    /*showPoint->point = poin1;    
    showPoint->action = show_point; 
    showPoint->action(showPoint->point);*/ 
    showPoint->point = poin2;
    showPoint->action = show_point;
    showPoint->action(showPoint->point);
    showPoint->action = update_point;
    showPoint->action(showPoint->point);
    showPoint->action = show_point;
    showPoint->action(showPoint->point);
    return 0;
}