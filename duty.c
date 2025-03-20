#include <stdio.h>
#include <stdlib.h>

void fillEvenNumbers(int *arr, int count) { // Function of filling the array with even numbers
    for(int i = 0; i < count; i++){
        arr[i] = (i + 1) * 2;   // Filling the array with even numbers
    }
}

int main() {             
    int count = 25 / 2; // Number of pairs between 1-25
    int *arr = (int *)malloc(count * sizeof(int)); //Memory allocation
    printf("Array size: %d\n", count); // Print the size of the array
    if (arr == NULL) {  // to preserve memory if malloc fails 
        printf("Memory allocation failed!\n");
        return 1;
    }

    fillEvenNumbers(arr, count); // Filling the array with even numbers

    printf("Even numbers array: ");
    for(int i = 0; i < count; i++){ // Print the array
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Release memory
    return 0;
}
