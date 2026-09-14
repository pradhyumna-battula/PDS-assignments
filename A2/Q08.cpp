#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    char sentence[100];

    cout << "Enter student full name: ";
    getline(cin, name);

    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    cout << "\nName: " << name << endl;
    cout << "Sentence: " << sentence << endl;

    return 0;
}

/*
Difference between cin >> and getline():

If we use `cin >>` instead of `getline()`:
1. `cin >>` considers spaces, tabs, and newlines as delimiters. So if the input contains spaces 
   (e.g., "Robert Downy Jr"), `cin >>` will only read "Robert" and stop at the space.

2. The remaining part of the input ("Downy Jr") stays in the input buffer (stream). 
   This causes the next `cin` or `getline()` statement to automatically pick up 
   the left-over characters without waiting for the user to type anything.

`getline()` reads the whole line including spaces until it hits a newline character (\n).
*/
