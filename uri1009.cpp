#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    char nome[10];
    double s, v, t;
    cin >> nome;
    cin >> s;
    cin >> v;
    t = s + (v * 0.15);
    cout << "TOTAL = R$ " << t << endl;
    return 0;
}
