#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main()
{
    double r,a;

    cin >> r;

    a = 3.14159*r*r;

    cout << "A=" <<  fixed << setprecision(4) << a << endl;

}
