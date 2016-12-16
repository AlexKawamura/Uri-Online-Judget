#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){

    cout << fixed << setprecision(5);
    double R1, R2, a, b, c, delta, d;
    cin >> a >> b >> c;
    delta = sqrt ((b * b) - (4 * a * c));
    d = 2 * a;
    if (delta < 0 || isnan(sqrt ((b * b) - (4 * a * c)))){
        cout << "Impossivel calcular" << endl;
    }
    else if (d == 0){
        cout << "Impossivel calcular" << endl;
    }
    else {
        R1 = ((- b) + delta) / (d);
        R2 = ((- b) - delta) / (d);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    return 0;
}
