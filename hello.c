#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello, world!\n");
    printf("This is a simple C program.\n");

    int *numbers = malloc(20 * sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < 20; ++i) {
        numbers[i] = i + 1;
    }
    printf("Numbers from 1 to 20:\n");
    
    printf("Allocated space for 20 integers.\n");
    for (int i = 0; i < 20; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    free(numbers);
    return 0;
}
