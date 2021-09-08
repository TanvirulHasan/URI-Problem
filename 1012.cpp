#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,triangle,circle,trapezium,square,rectangle;
    cin >> a >> b >> c;
    double pi = 3.14159;

    triangle = 1/2.0 * a * c;
    circle = pi*c*c;
    trapezium = 1/2.0 *(a+b)*c;
    square = b*b;
    rectangle = a*b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;


}
