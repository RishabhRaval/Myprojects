#include<iostream>
using namespace std;

int main()
{
    int fnum,fden,snum,sden,ansnum,ansden;
    cout << "\n\nInput numerator of first fraction :";
    cin >> fnum;
    cout << "Input denominator of first fraction : ";
    cin >> fden;
    cout << "\nInput numerator of second fraction : ";
    cin >> snum;
    cout << "Input denominator of second fraction : ";
    cin >> sden;

    ansnum = (fnum*sden) + (snum*fden);
    ansden = (fden*sden);

    cout << "\n\nAnswer in the fraction form : " << ansnum << " / " << ansden;
    
    return 0;
}