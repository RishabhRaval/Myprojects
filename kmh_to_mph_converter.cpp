#include<iostream>
using namespace std;
int main()
{
    float kmh,mph;
    cout << "\n\n Speeed in Kilometers per hour :";
    cin >> kmh;

    mph =kmh/1.609; 
    cout << "\n\nSpeed in Miles per hour : "<< mph;
    return 0;
}