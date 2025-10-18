#include <iostream>

struct Rectangle {
    int width;
    int height;

    int area() {
        return 2 * (width + height);
    }
};

void print_rectangle(const Rectangle &rectangle) {
    std::cout << rectangle.width << rectangle.height;
}

int main() {
    Rectangle r1;
    r1.width = 10;
    r1.height = 20;
    print_rectangle(r1);

    r1.area();


    Rectangle r2 = {5, 10};
    print_rectangle(r2);
    return 0;
}