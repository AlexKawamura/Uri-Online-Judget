#include <iostream>

using namespace std;

int main(){

    int h1, h2, dur;
    cin >> h1 >> h2;
    if(h1 >= h2){
        dur = 24 - (h1 - h2);
    }
    else{
        dur = h2 - h1;
    }
    cout << "O JOGO DUROU " << dur << " HORA(S)" << endl;

    return 0;
}
