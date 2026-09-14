#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[10] = "example";
    char str2[10];

    strcpy(str2, str1);
    cout << str2; // displays example

    return 0;
}
