#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Gia tri cua x: %d\n", *ptr);
    printf("Dia chi cua x: %p\n", ptr);

    return 0;
}
