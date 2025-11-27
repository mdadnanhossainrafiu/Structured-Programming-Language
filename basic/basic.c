#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in pointer p: %p\n", p);
    printf("Value pointed by p: %d\n", *p);
}

