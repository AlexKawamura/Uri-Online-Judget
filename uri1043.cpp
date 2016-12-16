#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(1);
    double lad1, lad2, lad3, per, area;
    cin >> lad1 >> lad2 >> lad3;
    if(lad1 > fabs(lad2 - lad3) && lad1 < lad2 + lad3 && lad2 > fabs(lad1 - lad3) && lad2 < lad1 + lad3 && lad3 > fabs(lad1 - lad2) && lad3 < lad1 + lad2){
        per = lad1 + lad2 + lad3;
        cout << "Perimetro = " << per << endl;
    }
    else{
        area = ((lad1 + lad2) * lad3) / 2;
        cout << "Area = " << area << endl;
    }

    return 0;
}
