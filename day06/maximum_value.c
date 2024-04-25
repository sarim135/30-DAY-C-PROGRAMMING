// Writing a C program to find the maximum value in the array of integers.
#include <stdio.h>

int find_max(int arr[], int size) {
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = find_max(arr, size);
    printf("The maximum value in the array is: %d\n", max);
    
    return 0;
}
