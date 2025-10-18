#include <iostream>

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
   std::cout << multiply(3, 4);
   std::cout << multiply(3.0, 4.0);
    return 0;
}