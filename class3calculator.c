#include <stdio.h>


int addition(int num1, int num2){
    return num1+num2;
};


int subtraction(int num1, int num2){
    return num1-num2;
};


int multiplication(int num1, int num2){
    return num1*num2;
};


int division(int num1, int num2){
    return num1/num2;
};



int main(){
    int num1, num2, choice, result;

    printf("Select an option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1, 2, 3 or  4): ");
    scanf("%d", &choice);


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (choice) {
        case 1:
            result = addition(num1, num2);
            printf("The sum is: %d\n", result);
            break;
        case 2:
            result = subtraction(num1, num2);
            printf("The difference is: %d\n", result);
            break;
        case 3:
            result = multiplication(num1, num2);
            printf("The product is: %d\n", result);
            break;
        case 4:
            result = division(num1,num2);
            printf("the division is : %d\n", result);
            break;
        default:
            printf("Invalid choice! Please select 1, 2,  3 or 4.\n");
    }

    return 0;
    
}
