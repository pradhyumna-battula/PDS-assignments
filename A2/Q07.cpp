#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    cout << "enter a line: ";
    char line[100];
    cin.getline(line, 100);
    int vovels = 0, constanants = 0;
    for(int i = 0; i < strlen(line); i++) {
        if(isupper(line[i]) || islower(line[i])) {
            if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
                vovels++;
            }
            else {
                constanants++;
            }
        }
    }
    cout << "your line has " << vovels << " vovels and " << constanants << " constanants";

    return 0;
}
