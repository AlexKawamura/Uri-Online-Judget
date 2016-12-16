#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);
    int codigo;
    double quantidade, total;
    cin >> codigo >> quantidade;
    switch(codigo){
    case 1:
        total = 4.00 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 2:
        total = 4.50 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 3:
        total = 5.00 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 4:
        total = 2.00 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 5:
        total = 1.50 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    }

    return 0;
}
