#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int maxCount = 0;
    int popular = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            popular = arr[i];
        }
    }
    printf("Phan tu co so lan xuat hien nhieu nhat la : %d\n", popular);
} 
