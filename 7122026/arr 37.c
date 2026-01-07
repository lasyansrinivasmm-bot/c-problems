#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Output result
    if(found)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}