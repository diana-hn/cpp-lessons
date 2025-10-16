#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void increment(int &a) {
    a++;
}

void sum_arr(int a[5], int &sum) {
    for(int i = 0; i < 5; i++ ) {
        sum += a[i];
    }
}

void find_min_max(const int arr[5], int &min, int &max) {
    for (int i = 0; i < 5; i++) {
        int current = arr[i];
        min = min > current ? current: min;
        max = max < current ? current: max;
    }
}

void order_numbers(int &a, int &b) {
    if (a > b) {
        swap(a , b);
    }
}

int main() {
    int a = 7;
    int b = 3;
    std::cout << "before order_numbers " << a << ", " << b << std::endl;
    order_numbers(a,b);
    std::cout << "after order_numbers " << a << ", " << b << std::endl;
    return 0;
}