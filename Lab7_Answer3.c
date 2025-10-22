#include <stdio.h>

int main() {
    char input[100], temp[100], result[100];
    int i = 0, j = 0, len;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {
        if (sscanf(&input[i], "%[^0-9]", temp) == 1) {
            int k = 0;
            while (temp[k] != '\0') {
                result[j++] = temp[k++];
            }
            i += k;
        }
        while (input[i] >= '0' && input[i] <= '9') {
            i++;
        }
    }

    result[j] = '\0';

    printf("String without numbers: %s", result);

    return 0;
}



