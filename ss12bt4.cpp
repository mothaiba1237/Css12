#include <stdio.h>

int findMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int a[] = {1, 11, 3, 9, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int max = findMax(a, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

