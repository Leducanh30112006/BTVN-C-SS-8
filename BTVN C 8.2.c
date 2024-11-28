#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int num, found = 0;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }else{
        	printf("Phan tu khong ton tai trong mang.\n");
        	break;
		}
    }
 
    return 0;
}

