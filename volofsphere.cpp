#include<iostream>
using namespace std;
int main ()
{
    float r,v;
    cout << "\n\nRadius : ";
    cin >> r;

    v = ((4.0/3.0)*(3.14*r*r*r));

    cout << "\nVolume of a sphere : " << v << endl;
    return 0;
}