#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int a = 5;
    int b = 10;
    std::cout << "before swap " << a << ", " << b << std::endl;
    swap(a, b);
    std::cout << "after swap " << a << ", " << b;
    return 0;
}