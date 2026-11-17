#include <iostream>

// Міняє місцями значення, на які вказують x і y.
void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

// Впорядковує три змінні за зростанням (a <= b <= c).
void sort3(int* a, int* b, int* c) {
    if (*a > *b) swap_ptr(a, b);   // найменше з перших двох - у a
    if (*b > *c) swap_ptr(b, c);   // найбільше - у c
    if (*a > *b) swap_ptr(a, b);   // після другого обміну a і b могли збитися
}

int main() {
    int x = 3, y = 1, z = 2;
    sort3(&x, &y, &z);
    std::cout << x << ' ' << y << ' ' << z << '\n';

    int p = 9, q = 9, r = 1;
    sort3(&p, &q, &r);
    std::cout << p << ' ' << q << ' ' << r << '\n';
}