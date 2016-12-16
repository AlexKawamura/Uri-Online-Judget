#include <iostream>

using namespace std;

int main() {

    int idadeD, ano, mes, dia;
    cin >> idadeD;
    ano = idadeD / 365;
    mes = (idadeD%365)/30;
    dia = (idadeD%365)%30;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;
}
