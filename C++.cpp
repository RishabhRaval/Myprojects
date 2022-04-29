#include<iostream>
using namespace std;
int main()
{
    int a,b,tmp;
    cout << "\nEnter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    tmp = a; // tmp=9 
    a = b;   // a=8
    b = tmp; // b= 9

    cout << "\nSwapping of numbers ........";
    cout << "\nFirst number : " << a;
    cout << "\nSecond number : " << b;
    return 0;
}