#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer to an integer

    ptr = &num;    // Assign the address of num to the pointer ptr

    printf("Value of num: %d\n", num);         // Print the value of num
    printf("Address of num: %p\n", (void*)&num); // Print the address of num
    printf("Value of ptr (address of num): %p\n", (void*)ptr); // Print the address stored in ptr
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereference ptr to get the value stored at that address

    // Modify the value of num using the pointer
    *ptr = 20; // Change the value at the address ptr is pointing to

    printf("\nAfter modifying using pointer:\n");
    printf("Value of num: %d\n", num);   // Value of num is now updated
    printf("Value pointed to by ptr: %d\n", *ptr); // Value pointed to by ptr should also reflect the update

    return 0;
}
