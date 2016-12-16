#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(3);
    double km, L, kmL;
    cin >> km;
    cin >> L;
    kmL = km / L;
    cout << kmL << " km/l" << endl;
    return 0;
}
