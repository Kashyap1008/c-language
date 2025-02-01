#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char text[] = "Hello, this is a test file.\nWelcome to file handling in C!";
    char buffer[255];

    // Open the file for writing ("w" mode)
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    // Write a string to the file using fprintf()
    fprintf(file, "%s", text);
    printf("Data written to the file successfully.\n");

    // Close the file after writing
    fclose(file);

    // Open the file for reading ("r" mode)
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Read from the file using fgets() and print it to the console
    printf("\nReading the content of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);  // Print the line read from the file
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
