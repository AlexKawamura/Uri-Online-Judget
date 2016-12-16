#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e, f, g, h;
    cin >> a;
    b = a/100;
    c = (a%100)/50;
    d = ((a%100)%50)/20;
    e = (((a%100)%50)%20)/10;
    f = ((((a%100)%50)%20)%10)/5;
    g = (((((a%100)%50)%20)%10)%5)/2;
    h = ((((((a%100)%50)%20)%10)%5)%2)/1;

    cout << a << endl;
    cout << b << " nota(s) de R$ 100,00" << endl;
    cout << c << " nota(s) de R$ 50,00" << endl;
    cout << d << " nota(s) de R$ 20,00" << endl;
    cout << e << " nota(s) de R$ 10,00" << endl;
    cout << f << " nota(s) de R$ 5,00" << endl;
    cout << g << " nota(s) de R$ 2,00" << endl;
    cout << h << " nota(s) de R$ 1,00" << endl;

    return 0;
}
