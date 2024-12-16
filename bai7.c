#include <stdio.h>

void sapXepMang(int *arr, int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int mang[] = {5, 2, 9, 1, 3};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc: ");
    inMang(mang, kichThuoc);

    sapXepMang(mang, kichThuoc);

    printf("Mang sau: ");
    inMang(mang, kichThuoc);

    return 0;
}
