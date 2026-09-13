#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int original = n, reversed = 0;
    while(n > 0) {
        reversed = 10 * reversed + n % 10;
        n /= 10;
    }

    if(original == reversed) cout << "input is a palindrome";
    else cout << "input is not a palindrome";

    return 0;
}
