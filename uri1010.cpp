#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    float codigo, numero, valor, resultado;
    float codigo1,numero1,valor1, resultado1;
    float resultadoFinal;
    cin >> codigo;
    cin >> numero;
    cin >> valor;
    resultado = numero * valor;


 cin >> codigo1;
 cin >> numero1;
 cin >> valor1;
   resultado1 = numero1 * valor1;

   resultadoFinal = resultado + resultado1;
cout << "VALOR A PAGAR: R$ " << resultadoFinal << endl;


return 0;
}

