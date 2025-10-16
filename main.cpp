#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void increment(int &a) {
    a++;
}

int main() {
   int a = 5;
    std::cout << "before increment " << a << std::endl;
    increment(a);
    std::cout << "after increment " << a << std::endl;
    return 0;
}