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

int main() {
    int arr[5] = {10, 2, 3, 41, 5};
    int max = arr[0];
    int min = arr[0];
    std::cout << "before sum_arr " << min << ", " << max << std::endl;
    find_min_max(arr, min, max);
    std::cout << "after sum_arr " << min << ", " << max << std::endl;
    return 0;
}