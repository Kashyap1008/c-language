#include <stdio.h>
#include <stdlib.h>  // For malloc(), calloc(), realloc(), and free()

int main() {
    int *ptr, n, i;

    // Dynamically allocate memory for an array of integers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Using malloc to allocate memory for 'n' integers
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Input values for the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);  // Storing values in the allocated memory
    }

    // Display the values stored in the dynamically allocated array
    printf("\nValues in the dynamically allocated array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resize the dynamically allocated memory using realloc
    printf("\nEnter new number of elements: ");
    scanf("%d", &n);

    // Using realloc to change the size of the memory block
    ptr = (int*)realloc(ptr, n * sizeof(int));

    // Check if memory reallocation was successful
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit the program if memory reallocation fails
    }

    // Input new values for the resized array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Display the values in the resized array
    printf("\nValues in the resized array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Deallocate the memory when no longer needed
    free(ptr);

    return 0;
}
