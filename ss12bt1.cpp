#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    int tong = tinhTong(num1, num2);
    printf("Tong cua hai so la: %d\n", tong);
    return 0;
}

