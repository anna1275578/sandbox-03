#include <cstdint>
#include <cstring>
#include <iostream>

// Друкує знак і порядок числа f.
void print_fields(float f) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &f, sizeof(bits));    // безпечний спосіб побачити біти float

    std::uint32_t sign = bits >> 31;         // зсув на 31: лишається старший біт
    std::uint32_t exponent = (bits >> 23) & 0xFF;  // зсув на 23 і маска 8 бітів

    std::cout << sign << ' ' << exponent << '\n';
}

int main() {
    print_fields(-2.5f);
    print_fields(1.0f);
}