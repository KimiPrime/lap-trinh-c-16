#include <stdio.h>

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    inMang(mang, kichThuoc);

    return 0;
}