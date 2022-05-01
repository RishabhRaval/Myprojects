#include<iostream>
#include<iomanip>
#include<ctype.h>
using namespace std;

int main()
{
    char alpha;
    cout << "\n\nInput any alphabet in lowercase : " ;
    cin >> alpha;

    if(islower(alpha))
        cout << "\nEntered alphabet is correct .";
    else
        return 0;
}