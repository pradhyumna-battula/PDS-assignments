#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char line1[100];
    cin.getline(line1, 100);
    char line2[100];
    cin.getline(line2, 100);
    cout << strcat(line1, line2);

    return 0;
}
