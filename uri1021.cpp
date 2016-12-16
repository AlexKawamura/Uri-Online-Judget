#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int nota1, cem, cinquenta, vinte, dez, cinco, dois, um, cinquentaC;
    double nota;
    cin >> nota;
    nota1 = nota;

    cem = nota1/100;
    cinquenta = (nota1%100)/50;
    vinte = ((nota1%100)%50)/20;
    dez = (((nota1%100)%50)%20)/10;
    cinco = ((((nota1%100)%50)%20)%10)/5;
    dois = (((((nota1%100)%50)%20)%10)%5)/2;
    um = ((((((nota1%100)%50)%20)%10)%5)%2)/1;

    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << vinte << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << um << " moeda(s) de R$ 1.00" << endl;
    cout << cinquentaC << " moeda(s) de R$ 0.50" << endl;
    /*cout << vintecinco << " moeda(s) de R$ 0.25" << endl;
    /*cout << dezC << " moeda(s) de R$ 0.10" << endl;
    cout << cincoC << " moeda(s) de R$ 0.05" << endl;
    cout << umC << " moeda(s) de R$ 0.01" << endl;*/

    return 0;
}
