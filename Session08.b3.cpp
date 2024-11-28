#include <stdio.h>

int main() {
    int n;
    printf("Moi nhap 1 so nguyen vao ma tran : ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("so phan tu co trong  ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Moi nhap vi tri cua so nguyen to (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n Ma tran vuong la :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
