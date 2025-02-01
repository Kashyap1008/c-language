#include <stdio.h>

// Define a structure called 'Person'
struct Person {
    char name[50];   // String to store the name
    int age;         // Integer to store age
    float height;    // Float to store height in meters
};

int main() {
    // Declare and initialize a structure variable of type 'Person'
    struct Person person1;

    // Assign values to the structure members
    printf("Enter name: ");
    fgets(person1.name, sizeof(person1.name), stdin);  // Read name with spaces
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter height (in meters): ");
    scanf("%f", &person1.height);

    // Print structure values
    printf("\nPerson Details:\n");
    printf("Name: %s", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);

    return 0;
}
