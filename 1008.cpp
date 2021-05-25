#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,h;
    double a,salary;

    cin >> n >> h >> a;

    salary = (h*a);

    cout << "NUMBER = " << n << endl << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
}
