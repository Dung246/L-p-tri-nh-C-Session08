#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {10, 29, 37, 40},
        {50, 60, 70, 80},
        {90, 10, 11, 12},
        {13, 14, 15, 46}
    };
    int n = 4; 
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
    }
    for (int j = 0; j < n; j++) {
        sum += matrix[n-1][j];
    }
    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][0];
    }
    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][n-1];
    }
    printf("Tong cua cac phan tu tren duong bien la : %d\n", sum);
}
