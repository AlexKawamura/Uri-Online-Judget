#include <iostream>

using namespace std;

int main(){

    int h1, h2, m1, m2, durH, durM;
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 >= h2){
        durH = 24 - (h1 - h2);
        if(m1 > m2){
            durM = 60 - (m1 - m2);
        }
        else{
            durM = m2 - m1;
        }
    }
    else{
        durH = h2 - h1;
        if(m1 > m2){
            durM = 60 - (m1 - m2);
        }
        else{
            durM = m2 - m1;
        }
    }
    cout << "O JOGO DUROU " << durH << " HORA(S) E " << durM << " MINUTO(S)" << endl;

    return 0;
}
