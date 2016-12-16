#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double a, b, c;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;
    cin >> a;
    cin >> b;
    cin >> c;
    triangulo = (a * c) / 2;
    circulo = pi * (c * c);
    trapezio = ((a + b) * c) / 2;
    quadrado = b * b;
    retangulo = a * b;
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}
