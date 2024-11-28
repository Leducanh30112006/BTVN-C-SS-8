#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 1, 4, 3, 2, 3, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int flag;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            flag = arr[i];
        }
    }
    printf("Phan tu co so lan xuat hien nhieu nhat la: %d\n", flag);
    return 0;
}

