#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int n;
    int m = 0; 
    printf("Moi ban nhap vao 1 phan tu : ");
    scanf("%d", &n);

    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            printf("Vi  tri cua phan tu la :  %d.\n", i);
            m= 1;
            break; 
        }
    }
    if (!m) {
        printf("Phan tu khong ton tai \n");
    }

    return 0;
}
