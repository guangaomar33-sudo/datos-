#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:

    Point() : x(0), y(0) {
        cout << "default constructor " << this << endl;
    }    
    
    Point(int c) : x(c), y(c) {
         cout << "constructor from two value" << this << endl;
    }

    Point(int px, int py) : x(px), y(py) {
        cout << "constructor from two values" << this << endl;
    }

    Point(const Point& other) : x(other.x), y(other.y) {
        cout << "copy constructor " << this << endl; 
    }

    Point& operator= (const Point& rhs) {
        cout << "operador" << this << endl;
        if (this !=&rhs) {
        x = rhs.x;
        y = rhs.y;
        }
        return *this;
    }

    void move(int dx, int dy) {
        x = x + dx;
        y = y + dy;
    }

    int getX() const {
        return x;
    }    

     int getY() const {
        return y;   
    }

    void print() const {
        cout << "(" << getX() << ", " << getY() << ")" << endl;
    }    
};

void funcion(Point& z) {
    z.print();
    z.move(10, 10);
    z.print();
}

int main() {
   cout << "point class" << endl;
    Point r;
    Point p(3, 7);
    Point q(7);
    //Point* pp = &p;
    
    Point a(q);
    cout << "segunda parte" << endl;
    funcion(r);
    r.print();

    Point b = p;
    b.print();
    b = r;
    b.print();

    b = b;
    a.print();

   // p.print();
   // q.print();
    //p.move(-2, 3);
   // p.print();
    //cout << q.getX() << " " << q.getY() << endl;

    //pp->print();

    //const Point& qq = p;
    //qq.print();
    //qq.move(10, 10);
    //qq.print();
    //qq.print();
    //pp->move(1,1);
    //pp->print();

    //pp = &q;
    //pp->print();

    //Point& rp = p;

    //rp.print();
    //rp.move(-1, -1);
    //rp.print();
    //p.print();

    return 0;
}