#include <iostream>

class Point {
    int x;
    int y;

public:

    Point (int _x, int y) {
        x = _x;
        this->y = y;
    }
    void print() {
        std::cout << x << "," << y;
    }
};

int main() {
   Point p1 = {1,2};
    Point p2 = {10,20};
    p1.print();
    std::cout << std::endl;
    p2.print();

    return 0;
}

