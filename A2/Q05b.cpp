#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word1[100];
    char word2[100];
    cout << "type two words: ";
    cin >> word1 >> word2;
    if(strcmp(word1, word2) == 0) cout << "both words are same";
    else {
        if(strcmp(word1, word2) > 0) cout << word2;
        else cout << word1;
        cout << " comes first alphabetically";
    }

    return 0;
}
