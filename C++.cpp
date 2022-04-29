#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "\n\nEnter first number :";
    cin >> a;
    cout << "\nEnter second number :";
    cin >> b;

    cout << "\n**********MAIN MENU**********";
    cout << "\n[1]ADDITION";
    cout << "\n[2]SUBTRACTION";
    cout << "\n[3]MULTIPLICATION";
    cout << "\n[4]DIVSION(Quotient)";
    cout << "\n[5]EXIT";
    bjump:
    cout << "\n\nCHOOSE YOUR OPTION :";
    cin >> c;
 
   switch(c)
    {
        case 1:
        cout << "\nAddition : " << a+b;
        break;

        case 2:
        cout << "\nSubtraction : " << a-b;
        break;

        case 3:
        cout << "\nMultiplication : " << a*b;
        break;

        case 4:
        cout << "\nDivision : " << a/b;
        break;

        if(c==5)
        case 5:
        cout << "\nGoodbye !!!!";
        break;
        
        default:
        cout << "\nEnter valid input(choice) !!";
    }
    if(c!=5)
        goto bjump;
    return 0;
}