#include <stdio.h>

int main() {
    char type;
    printf("Enter 'c' for character, 'f' for float, or 'i' for integer: ");
    scanf(" %c", &type);

    switch (type) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            printf("\nCharacter: %c\n", ch);
            printf("ASCII code: %d\n", ch);
            printf("Size: %lu bytes\n", sizeof(ch));

            printf("\nCharacter calculations:\n");
            for (int i = 1; i <= 4; i++) {
                char nextChar = ch + (3 * i);
                printf("Character: %c, ASCII: %d, Size: %lu bytes\n", nextChar, (int)nextChar, sizeof(nextChar));
            }
            break;
        }

        case 'f': {
            float num;
            printf("Enter a float: ");
            scanf("%f", &num);
            printf("\nFloat: %.2f\n", num);
            printf("Size of float: %lu bytes\n\n", sizeof(num));

            printf("\nNext 4 Float values:\n");
            for (int i = 1; i <= 4; i++) {
                float nextFloat = num * (3.0f * i);
                printf("Float: %.2f, Size: %lu bytes\n", nextFloat, sizeof(nextFloat));
            }
            break;
        }

        case 'i': {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            printf("\nInteger: %d\n", num);
            printf("Size of integer: %lu bytes\n\n", sizeof(num));

            printf("\nNext 4 Integer values:\n");
            for (int i = 1; i <= 4; i++) {
                int nextInt = num * (3 * i);
                printf("Integer: %d, Size: %lu bytes\n", nextInt, sizeof(nextInt));
            }
            break;
        }

        default:
            printf("Invalid input type.\n");
    }

    return 0;
}


