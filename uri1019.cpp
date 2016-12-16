#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int a, b, c, d, e, f, g, h;
    int i, j, k, l, m;
    cin >> a;
    b = a/100;
    c = (a%100)/50;
    d = ((a%100)%50)/20;
    e = (((a%100)%50)%20)/10;
    f = ((((a%100)%50)%20)%10)/5;
    g = (((((a%100)%50)%20)%10)%5)/2;
    h = ((((((a%100)%50)%20)%10)%5)%2)/1;

    printf ( "%f\n moeda(s) de R$ 0.50", fmod (((((((a%100)%50)%20)%10)%5)%2)/1,0.50));

    cout << a << endl;
    cout << "NOTAS:" << endl;
    cout << b << " nota(s) de R$ 100,00" << endl;
    cout << c << " nota(s) de R$ 50,00" << endl;
    cout << d << " nota(s) de R$ 20,00" << endl;
    cout << e << " nota(s) de R$ 10,00" << endl;
    cout << f << " nota(s) de R$ 5,00" << endl;
    cout << g << " nota(s) de R$ 2,00" << endl;

    cout << "MOEDAS:" << endl;
    cout << h << " moeda(s) de R$ 1.00" << endl;
    cout << i << " moeda(s) de R$ 0.50" << endl;
    cout << j << " moeda(s) de R$ 0.25" << endl;
    cout << k << " moeda(s) de R$ 0.10" << endl;
    cout << l << " moeda(s) de R$ 0.05" << endl;
    cout << m << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
