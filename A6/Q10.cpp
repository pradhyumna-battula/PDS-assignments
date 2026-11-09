#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("numbers.txt");
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    int num;
    while (inFile >> num) {
        if (num % 2 == 0) {
            evenFile << num << endl;
        } else {
            oddFile << num << endl;
        }
    }

    inFile.close();
    evenFile.close();
    oddFile.close();

    return 0;
}
