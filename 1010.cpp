#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int code,unit;
    double price,extra;
    double value = 0;

    for(int i=0;i<2;i++)
    {
        cin >> code >> unit >> price ;
        extra = unit*price;
        value += extra;
    }

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << value << endl;

}
