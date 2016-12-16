#include <iostream>

using namespace std;

int main(){

    int num[3];
    int num2[3];
    for(int i = 0; i < 3; i++){
        cin >> num[i];
    }
    if(num[0] > num[1] && num[0] > num[2]){
        num2[2] = num[0];
        if(num[1] > num[2]){
            num2[1] = num[1];
            num2[0] = num[2];
        }
        else{
            num2[1] = num[2];
            num2[0] = num[1];
        }
    }
    if(num[1] > num[0] && num[1] > num[2]){
        num2[2] = num[1];
        if(num[0] > num[2]){
            num2[1] = num[0];
            num2[0] = num[2];
        }
        else{
            num2[1] = num[2];
            num2[0] = num[0];
        }
    }
    if(num[2] > num[1] && num[2] > num[0]){
        num2[2] = num[2];
        if(num[1] > num[0]){
            num2[1] = num[1];
            num2[0] = num[0];
        }
        else{
            num2[0] = num[1];
            num2[1] = num[0];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << num2[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << num[i] << endl;
    }

    return 0;
}
