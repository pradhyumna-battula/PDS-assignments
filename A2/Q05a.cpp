#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1;
    string word2;
    cout << "type two words: ";
    cin >> word1 >> word2;
    if(word1 == word2) cout << "both words are same";
    else {
        if(word1 > word2) cout << word2;
        else cout << word1;
        cout << " comes first alphabetically";
    }

    return 0;
}
