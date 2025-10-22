#include <stdio.h>

int main() {
    int a[5], b[5], merged[10];
    int i, j;

    printf("Enter 5 integers for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 integers for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 5; i++) {
        merged[i] = a[i];
    }

    for(i = 0, j = 5; i < 5; i++, j++) {
        merged[j] = b[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}



