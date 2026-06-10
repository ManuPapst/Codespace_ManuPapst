#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

int add(int a, int b);


int main(void) {
    printf("Hello, world!\n");
    printf("This is a simple C program.\n");

    int *numbers = malloc(20 * sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < 20; ++i) {
        numbers[i] = rand() % 101 + 100; /* random between 100 and 200 inclusive */
    }

    printf("Allocated space for 20 integers (random 100-200):\n");
    for (int i = 0; i < 20; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    int sum = add(5, 10);
    printf("The sum of 5 and 10 is: %d\n", sum);

    Person sue;
    strncpy(sue.name, "Sue", sizeof(sue.name));
    sue.name[sizeof(sue.name)-1] = '\0';
    sue.age = 20;
    printf("Person: name=%s, age=%d\n", sue.name, sue.age);

    free(numbers);
    return 0;
}

int add(int a, int b) {
    return a + b;
}