#include <iostream>

class Rectangle {
private:
    int width;
    int length;

public:
    Rectangle(int width, int length) {
        this->width = width;
        this->length = length;
    }

    Rectangle(int size) {
        width = size;
        length = size;
    }

    int perymetr();
    int area();

};

int Rectangle::perymetr() {
    return 2 * (width + length);
}

int Rectangle::area() {
    return width * length;
}


int main() {
   Rectangle rectangle {10,15};
   Rectangle square {10};
    std::cout << rectangle.perymetr();
    std::cout << square.perymetr();
    std::cout << rectangle.area();
    std::cout << square.area();
    return 0;
}

