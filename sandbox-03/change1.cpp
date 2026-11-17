#include <cstdint>
#include <iostream>

int main() {
    double a[3] = {10, 20, 30};   // ЗМІНА: було int
    std::cout << (&a[1] - &a[0]) << '\n';
    std::cout << ((char*)&a[1] - (char*)&a[0]) << '\n';
    std::cout << (&a[2] - &a[0]) << '\n';
}