#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << setw(8) << "LOCATION" << setfill('.') << setw(20) << "POPULATION" << endl
         << setw(8) << "Portcity" << setw(20) << "POPU1" << endl
         << setw(8) << "Hightown" << setw(20) << "POPU2" << endl
         << setw(8) << "Lowville" << setw(20) << "POPU3" << endl;
    return 0;
}