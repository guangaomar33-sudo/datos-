#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    
    point(int c) : x(c), y(c) {}

    Point(int px, int py) : x(px), y(py) {
        cout << "constructor from two values" << this << endl;
    }

    void move(int dx, int dy) {
        x = x + dx;
        y = y + dy;
    }

    int getX() const {
        return x;
    }
};

int main() {
   cout << "point class" << endl;

    Point p(3, 7);
    point q(7)

    //p.move(-2, 3);

    cout << .getX() << endl;
    return 0;
}