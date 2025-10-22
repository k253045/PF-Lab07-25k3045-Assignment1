#include <stdio.h>

int main() {
    char input[200], temp[200];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {
        if (sscanf(&input[i], "%[ \t\n\v\f\r]", temp) == 1) {
            int j = 0;
            while (temp[j] != '\0') {
                count++;
                j++;
            }
            i += j;
        } else {
            i++;
        }
    }

    printf("Number of whitespace characters: %d\n", count);

    return 0;
}



