#include <stdio.h>

int main() {
    int n = 6;
    int arr[n];
    int i;

    printf("Enter %d elements in the array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Odd numbers in the array are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2!= 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}