#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    cout << fixed << setprecision(1);
    double num[3];
    double num2[3];
    for(int i = 0; i < 3; i++){
        cin >> num[i];
    }
    if(num[0] >= num[1] && num[0] >= num[2]){
        num2[0] = num[0];
        if(num[1] >= num[2]){
            num2[1] = num[1];
            num2[2] = num[2];
        }
        else{
            num2[1] = num[2];
            num2[2] = num[1];
        }
    }
    if(num[1] >= num[0] && num[1] >= num[2]){
        num2[0] = num[1];
        if(num[0] >= num[2]){
            num2[1] = num[0];
            num2[2] = num[2];
        }
        else{
            num2[1] = num[2];
            num2[2] = num[0];
        }
    }
    if(num[2] >= num[1] && num[2] >= num[0]){
        num2[0] = num[2];
        if(num[1] >= num[0]){
            num2[1] = num[1];
            num2[2] = num[0];
        }
        else{
            num2[2] = num[1];
            num2[1] = num[0];
        }
    }
    if(num2[0] >= num2[1] + num2[2]){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(pow(num2[0], 2) == pow(num2[1], 2) + pow(num2[2], 2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(pow(num2[0], 2) > pow(num2[1], 2) + pow(num2[2], 2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(pow(num2[0], 2) < pow(num2[1], 2) + pow(num2[2], 2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(num2[0] == num2[1] && num2[0] == num2[2] && num2[1] == num2[2]){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(num2[0] == num2[1] || num2[0] == num2[2] || num2[1] == num2[2]){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
