#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4;
    int sum = 0;
    printf("Cac phan tu duong cheo chinh la :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);  
        sum += matrix[i][i];         
    }
    printf("\nTong cua cac  phan tu duong cheo chinh la: %d\n", sum);
}
