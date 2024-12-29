#include <stdio.h>

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int num;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);
    int f = fact(num);
    printf("Giai thua cua %d la: %d\n", num, f);
    return 0;
}

