#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    auto a = 5;
    auto b = 5.5;
    auto c = 'x';
    auto d = "hello";
    auto e = true;
    cout << "a is type: " << typeid(a).name() << endl;
    cout << "b is type: " << typeid(b).name() << endl;
    cout << "c is type: " << typeid(c).name() << endl;
    cout << "d is type: " << typeid(e).name() << endl;

    return 0;
}
