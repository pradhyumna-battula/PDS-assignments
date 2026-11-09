#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream inFile("source.txt");
    if (!inFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    ofstream outFile("destination.txt");
    if (!outFile) {
        cout << "Error opening destination file!" << endl;
        inFile.close();
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(toupper(ch));
    }

    cout << "File contents successfully copied and converted to uppercase in 'destination.txt'." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
