#include <cstdint>
#include <iostream>

int main() {
    int a[5] = {3, 1, 4, 1, 5};
    int* p = a + 1;                  // ЗМІНА
    int sum = 0;
    for (int i = 0; i < 4; ++i) {    // ЗМІНА
        sum = sum + *p;
        p = p + 1;
    }
    std::cout << sum << '\n';
    std::cout << (p - a) << '\n';
}