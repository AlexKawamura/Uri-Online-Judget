#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

    cout << fixed << setprecision(4);
    double x1, y1, x2, y2, d;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout << d << endl;

    return 0;
}
