#include <iostream>
using namespace std;

void decimal_to_octal(int decimalinput){
    if(decimalinput == 0){
        cout << 0;
        return;
    }

    int octaloutput[100];
    int i = 0;
    for(; decimalinput != 0; i++){
        octaloutput[i] = decimalinput % 8;
        decimalinput /= 8;
    }
    for(int j = i - 1; j >= 0; j--){
        cout << octaloutput[j];
    }
}

int main(){
    int n;
    cin >> n;
    decimal_to_octal(n);

    return 0;
}
