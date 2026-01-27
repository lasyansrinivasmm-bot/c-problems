#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    // Read input string (including spaces)
    gets(str);

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';  // End the string

    // Print result
    printf("%s", result);

    return 0;
}