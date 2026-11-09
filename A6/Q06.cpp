#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int wordCount = 0;
    char* ptr = str;
    bool inWord = false;

    while (*ptr != '\0') {
        if (*ptr != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if (*ptr == ' ') {
            inWord = false;
        }
        ptr++;
    }
    cout << "Number of words: " << wordCount << endl;

    ptr = str;
    int maxLen = 0, currentLen = 0;
    char* startPtr = nullptr;
    char* longestStart = nullptr;

    while (true) {
        if (*ptr != ' ' && *ptr != '\0') {
            if (currentLen == 0) startPtr = ptr;
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                longestStart = startPtr;
            }
            currentLen = 0;
        }
        if (*ptr == '\0') break;
        ptr++;
    }

    cout << "Longest word: ";
    if (longestStart != nullptr) {
        for (int i = 0; i < maxLen; i++) {
            cout << *(longestStart + i);
        }
    }
    cout << endl;

    char revStr[200];
    ptr = str;
    char* wStart = nullptr;
    int destIndex = 0;

    while (*ptr != '\0') {
        if (*ptr != ' ') {
            wStart = ptr;
            while (*ptr != ' ' && *ptr != '\0') {
                ptr++;
            }
            char* wEnd = ptr - 1;
            while (wEnd >= wStart) {
                revStr[destIndex++] = *wEnd;
                wEnd--;
            }
        } else {
            revStr[destIndex++] = *ptr;
            ptr++;
        }
    }
    revStr[destIndex] = '\0';
    cout << "Reversed words in sentence: " << revStr << endl;

    char cleanStr[200];
    char* src = str;
    char* dest = cleanStr;
    bool spaceFound = false;

    while (*src == ' ') {
        src++;
    }

    while (*src != '\0') {
        if (*src != ' ') {
            *dest = *src;
            dest++;
            spaceFound = false;
        } else {
            if (!spaceFound) {
                *dest = ' ';
                dest++;
                spaceFound = true;
            }
        }
        src++;
    }

    if (dest > cleanStr && *(dest - 1) == ' ') {
        dest--;
    }
    *dest = '\0';

    cout << "Sentence after removing extra spaces: \"" << cleanStr << "\"" << endl;

    return 0;
}
