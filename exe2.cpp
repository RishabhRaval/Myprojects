#include<iostream>
using namespace std;

int main()
{
    float glns,cubic;
    cout << "\n\nInput number of Gallons : " << endl;
    cin >> glns;
    cubic = ( glns / 7.481 );
    cout << "\n " << glns << " gallons equals to  " << cubic << " cubic feet ." << endl;
    return 0;
}