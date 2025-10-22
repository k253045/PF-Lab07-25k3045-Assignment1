#include <stdio.h>

int search(int arr[], int size, int target) {
    int i;
    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10], i, target, result;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    result = search(arr, 10, target);

    if(result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}



