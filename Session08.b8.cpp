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
    printf("Cac duong cheo phu nhau la:\n");
    for (int i = 1; i < n; i++) { 
        printf("%d ", matrix[i][i-1]);  
        sum += matrix[i][i-1];         
    }
    printf("\nTong cua cac duong cheo phu nhau la : %d\n", sum);
}
