#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T get() const {
        return value;
    }
};


int main() {
    cout << "templates" << endl;
    Box<int> b(10);
    cout << b.get() << endl;

    Box<double> bd(3.1415);
    cout << bd.get() << endl;

    Box<string> bs("omar");
    cout << bs.get() << endl;
    return 0;
}