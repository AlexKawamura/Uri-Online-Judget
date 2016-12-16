#include <iostream>

using namespace std;

int main(){

    double num[6];
    int c = 0;
    for(int i = 0; i < 6; i++){
        cin >> num[i];
    }
    for(int i = 0; i < 6; i++){
        if(num[i] > 0){
            c++;
        }
    }
    cout << c << " valores positivos" << endl;

    return 0;
}
