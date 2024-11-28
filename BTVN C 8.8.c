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
    printf("Cac phan tu tren duong cheo phu la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n - i - 1]);
        sum += arr[i][n - i - 1];
    }
    printf("\n");
    printf("Tong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}

