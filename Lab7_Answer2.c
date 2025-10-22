#include <stdio.h>

int main() {
    int N, i, value, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    int freq[N];

    for(i = 0; i < N; i++) {
        freq[i] = 0;
    }

    for(i = 0; i < N; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &value);

        if(value < 0 || value >= N) {
            printf("Invalid input! Please enter a number between 0 and %d.\n", N - 1);
            return 1;
        }

        arr[i] = value;
        freq[value]++;
    }

    for(i = 0; i < N; i++) {
        if(freq[i] > 1) {
            if(!found) {
                printf("The following numbers appear more than once: ");
            }
            printf("%d ", i);
            found = 1;
        }
    }

    if(found) {
        printf("\n");
    } else {
        printf("No duplicate values were found in the array.\n");
    }

    return 0;
}

