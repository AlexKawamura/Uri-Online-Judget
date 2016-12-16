#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);
    int per;
    double sal, sal2, reajuste;
    cin >> sal;
    if(sal >= 0 && sal <= 400.00){
        per = 15;
        reajuste = (sal * per) / 100;
        sal2 = sal + reajuste;
    }
    else if(sal >= 400.01 && sal <= 800.00){
        per = 12;
        reajuste = (sal * per) / 100;
        sal2 = sal + reajuste;
    }
    else if(sal >= 800.01 && sal <= 1200.00){
        per = 10;
        reajuste = (sal * per) / 100;
        sal2 = sal + reajuste;
    }
    else if(sal >= 1200.01 && sal <= 2000.00){
        per = 7;
        reajuste = (sal * per) / 100;
        sal2 = sal + reajuste;
    }
    else{
        per = 4;
        reajuste = (sal * per) / 100;
        sal2 = sal + reajuste;
    }
    cout << "Novo salario: " << sal2 << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << per << " %" << endl;

    return 0;
}
