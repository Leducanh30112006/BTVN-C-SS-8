#include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("Nhap so hang,cot ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Cac phan tu tren duong cheo chinh la:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\n");
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}

