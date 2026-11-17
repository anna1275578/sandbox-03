#include <iostream>

// Додає елементи з діапазону [begin, end): end сам не читається.
int sum(const int* begin, const int* end) {
    int s = 0;
    while (begin != end) {   // зупиняємось, коли дійшли до "одразу за кінцем"
        s += *begin;
        ++begin;
    }
    return s;
}

int main() {
    int a[3] = {1, 2, 3};
    std::cout << sum(a, a + 3) << ' ' << sum(a, a) << '\n';
}