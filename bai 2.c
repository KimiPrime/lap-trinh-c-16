int main() {
    int x = 5, y = 10;

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);

    int temp = x;
    x = y;
    y = temp;

    printf("Sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}
