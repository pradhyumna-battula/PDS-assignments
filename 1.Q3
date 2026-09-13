#include <iostream>
using namespace std;

char to_char(int n){
    if(n >= 0 && n <= 9) return char(n + 48);
    else if(n >= 10) return char(n + 55);
    
}

void decimal_to_hexadecimal(int decimalinput){
    if(decimalinput == 0){
        cout << 0;
        return;
    }

    string hecadecimaloutput[100];
    int i = 0;
    for(; decimalinput != 0; i++){
        hecadecimaloutput[i] = to_char(decimalinput % 16);
        decimalinput /= 16;
    }
    for(int j = i - 1; j >= 0; j--){
        cout << hecadecimaloutput[j];
    }
}

void decimal_to_octal(int decimalinput){
    if(decimalinput == 0){
        cout << 0;
        return;
    }

    string octaloutput[100];
    int i = 0;
    for(; decimalinput != 0; i++){
        octaloutput[i] = to_char(decimalinput % 8);
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
    cout << endl;
    decimal_to_hexadecimal(n);

    return 0;
}
