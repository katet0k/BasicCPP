#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    system("color 0A");
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
    //------------------<SUM>-------------------    
    /*long long sum = 0;   
    
    for (size_t i = 0; i < size; i++)   {  

    sum += arr[i];   
    } 
    cout << "Sum = " << sum<< endl;*/ 

    //------------------<AVG>-------------------  

    /*double sum = 0;   
    * 
    for (size_t i = 0; i < size; i++) 
    {       
    sum += arr[i];  
    } 
    cout << "Avg = " << sum / size << endl;*/   
    long long max, min;
    max = min = arr[0];
    for (size_t i = 0; i < size; i++)
    {
        //------------------<MIN>-------------------        
        if (min > arr[i])
        {
            min = arr[i];
        }
        //------------------<MAX>-------------------        
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    return 0;
}
