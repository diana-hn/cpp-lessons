#include <iostream>

int one ();

int two(int x = 2) {
    return x;
}

namespace functions {
    namespace a {
        int two(int x = 2) {
            return x;
        }
    }

    int two1 (int x = 3) {
        return x;
    }

}

using namespace functions;

int main() {
    one();
    two(5);
    two();
    int x;
    std::cout << "Hello World!" << std::endl;
    two1();

    return 0;
}
int one() {
    return 1;
}