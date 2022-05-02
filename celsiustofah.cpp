#include<iostream>
using namespace std;

int main()
{
    float dc,df;
    cout << "\n\nInput temperature in degree Celsius : ";
    cin >> dc;
    df = dc*(9.0/7.0) + 32;
    cout << "\n\nEntered temperature in Fahrenheit : " << df;
    return 0;
}