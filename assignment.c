#include <stdio.h>


int main() {
    char choice;
    printf("Enter 'c' for character, 'f' for float, or 'i' for integer: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'c': {
            char input;
            printf("Enter a character: ");
            scanf(" %c", &input);

            printf("\nCharacter: %c\n", input);
            printf("ASCII code: %d\n", input);
            printf("Size of character: %lu bytes\n\n", sizeof(input));

            printf("Next four characters in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                char nextChar = input + (i * 3);
                printf("Character: %c, ASCII code: %d\n", nextChar, nextChar);
            }
            break;
        }
        case 'f': {
            float input;
            printf("Enter a float: ");
            scanf("%f", &input);

            printf("\nFloat: %.2f\n", input);
            printf("Size of float: %lu bytes\n\n", sizeof(input));

            printf("Next four floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                float nextFloat = input + (i * 3);
                printf("Float: %.2f\n", nextFloat);
            }
            break;
        }
        case 'i': {
            int input;
            printf("Enter an integer: ");
            scanf("%d", &input);

            printf("\nInteger: %d\n", input);
            printf("Size of integer: %lu bytes\n\n", sizeof(input));

            printf("Next four integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                int nextInt = input + (i * 3);
                printf("Integer: %d\n", nextInt);
            }
            break;
        }
        default:
            printf("Invalid choice. Please enter 'c', 'f', or 'i'.\n");
            break;
    }

    return 0;
}
