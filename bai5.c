#include <stdio.h>

void capNhatPhanTu(int *arr, int size, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < size) {
        *(arr + viTri) = giaTriMoi;
    } else {
        printf("Vi tri %d khong hop le.\n", viTri);
    }
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi cap nhat: ");
    inMang(mang, kichThuoc);

    capNhatPhanTu(mang, kichThuoc, 2, 8);

    printf("Mang sau khi cap nhat: ");
    inMang(mang, kichThuoc);

    return 0;
}
