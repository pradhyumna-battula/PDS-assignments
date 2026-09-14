#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if(n == 0 || n == 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int pairs = 0;
    for(int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            if(pairs >= 15) break;
            if(i == j) continue;
            if(is_prime(i + j)) {
                cout << '(' << i << ", " << j << ")\n";
                pairs++;
            }
        }
        if(pairs >= 15) break;
    }

    return 0;
}
