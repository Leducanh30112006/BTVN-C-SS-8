#include <stdio.h>

int main() {
    int sum = 0;
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    for (int i = 0; i < 5; i++) {
        sum += arr[0][i];
    }
    for (int i = 1; i < 4; i++) {
        sum += arr[i][4];
    }
    for (int i = 0; i < 4; i++) {
        sum += arr[3][i];
    }
    for (int i = 1; i < 3; i++) {
        sum += arr[i][0];
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    return 0;
}

