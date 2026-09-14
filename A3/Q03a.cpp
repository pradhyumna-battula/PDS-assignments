#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 0 || n == 1) {
        cout << n;
        return 0;
    }

    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    cout << result;

    return 0;
}
