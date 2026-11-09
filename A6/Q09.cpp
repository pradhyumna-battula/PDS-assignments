#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream inFile("source.txt");
    ofstream outFile("destination.txt");

    char ch;
    while (inFile.get(ch)) {
        outFile.put(toupper(ch));
    }

    cout << "File contents successfully copied and converted to uppercase in 'destination.txt'." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
