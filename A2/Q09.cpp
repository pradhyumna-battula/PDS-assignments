#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char line[100];
    cin.getline(line, 100);
    for(int i = 0; i < strlen(line); i++) {
        if(int(line[i]) <= 122 && int(line[i]) >= 97) {
            line[i] = char(int(line[i]) + 65 - 97);
        }
    }
    cout << line;

    return 0;
}
