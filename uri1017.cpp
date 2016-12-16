#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double t, kmH, kmH2;
    double kmL = 12;
    double L;
    cin >> t;
    cin >> kmH;
    kmH2 = kmH * t;
    L = kmH2 / kmL;
    cout << L << endl;

    return 0;
}
