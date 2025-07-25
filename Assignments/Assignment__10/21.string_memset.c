#include <stdio.h>
#include <string.h>

int main() {
    int arr[5];
    
    // Set all bytes in arr to 0
    memset(arr, 0, sizeof(arr));// is used to fill a block of memory with a specific byte value.

//Commonly used to initialize arrays, clear structures, or reset buffers to zero or any other value.

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}