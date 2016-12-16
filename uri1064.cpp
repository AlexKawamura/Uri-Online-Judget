#include <iostream>

using namespace std;

int main(){

    double num[6];
    int c = 0;
    double med;
    for(int i = 0; i < 6; i++){
        cin >> num[i];
        if(num[i] > 0){
            c++;
        }
    }
    for(int i = 0; i < c; i++){
            double num2[c] = num[i];
            med = med + num[i] / c;
    }
    cout << c << " valores positivos" << endl;
    cout << med << endl;

    return 0;
}
