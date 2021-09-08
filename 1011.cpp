#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int r;
    double volume;
    double pi = 3.14159;

    cin >> r;

    volume = 4/3.0 * pi * r * r* r;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
}
