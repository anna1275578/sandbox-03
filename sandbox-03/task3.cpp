#include <iostream>

// Розвертає масив a довжиною n: один вказівник іде з початку, другий з кінця.
void reverse(int* a, int n) {
    int* left = a;            // початок масиву
    int* right = a + n - 1;   // останній елемент
    while (left < right) {
        int t = *left;        // міняємо місцями значення
        *left = *right;
        *right = t;
        ++left;               // лівий іде вперед
        --right;              // правий іде назад
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
}