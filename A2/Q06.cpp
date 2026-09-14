#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "enter a line: ";
    char line[100];
    cin.getline(line, 100);
    cout << "you entered \'" << line << "\' which has lenth of " << strlen(line);
    
    return 0;
}
