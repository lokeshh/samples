#include <iostream>

using namespace std;


string evaluate(bool cond) {
    if (cond) {
        return "True";
    } else {
        return "False";
    }
}

class Circle {
    int radius;
    int x;
    int y;
public:

    Circle() : radius(0), x(0), y(0) { }


    Circle(int radius, int x, int y) : radius(radius), x(x), y(y) { }

    int getRadius() const {
        return radius;
    }

    void setRadius(int radius) {
        Circle::radius = radius;
    }

    int getX() const {
        return x;
    }

    void setX(int x) {
        Circle::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Circle::y = y;
    }

    void print() {
        cout << "radius: " << radius << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }

    //TODO ==
    bool operator==(const Circle &t2) {
        return radius == t2.radius;
    }

    bool operator<(const Circle &t2) {
        return (radius < t2.radius);

    }

    bool operator>(const Circle &t2) {
        return (radius > t2.radius);

    }
    //TODO <, >,+, -, ++, -- etc

    Circle operator+(const Circle &t2) {
        Circle obj;
        obj.radius = radius + t2.radius;
        obj.x = x + t2.x;
        obj.y = y + t2.y;
        return obj;
    }
    Circle operator-(const Circle &t2) {
        Circle obj;
        obj.radius = radius - t2.radius;
        obj.x = x - t2.x;
        obj.y = y - t2.y;
        return obj;
    }
    Circle operator++(int){
        radius++;
        return Circle(radius,x,y);
    }


    //TODO Friend
    friend void printPrivate(const Circle &t);


    //TODO output overloading
    friend void operator<<(ostream &os, const Circle &t) {
        os << "radius: " << t.radius << endl;
        os << "x: " << t.x << endl;
        os << "y: " << t.y << endl;
    }


};


void printPrivate(const Circle &t) {
    cout << "radius: " << t.radius << endl;
    cout << "x: " << t.x << endl;
    cout << "y: " << t.y << endl;
}


int main() {
    Circle t1(4, 3, 3);
    Circle t2(4, 4, 2);

    t1.print();
    cout << endl;

    printPrivate(t1);
    cout << endl;

    cout << evaluate(t1 == t2) << endl;
    cout << endl;
    cout << evaluate(t1 < t2) << endl;
    cout << endl;
    cout << evaluate(t1 > t2) << endl;
    cout << endl;


    cout << t1;

    Circle t3 = t1 + t2;
    cout << t3;
    t3++;
    cout<<t3;


    return 0;
}