#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name;
    double salary,sale,total;

    cin >> name;
    cin >> salary >> sale;

    total = salary + (sale*0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

}
