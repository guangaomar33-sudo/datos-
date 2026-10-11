#include <iostream>

using namespace std;

template <typename T>
T larger(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }        
}
int main() {
    cout << "Templates" << endl;
    int x = 12;
    int y = 27;
    int z = larger(x, y);
    cout << z << endl;

    double m = 3.1415;
    double n = 2.73;
    double o = larger(m, n);
    cout << o << endl;
    return 0;
}       