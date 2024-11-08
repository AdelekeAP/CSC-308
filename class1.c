#include <stdio.h>


int main (){
    int age;
    char gender ='M';
    char name[20];
    // printf("%c", gender);

    // puts("Hello");
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello you're %d years old ! \n ", age);
    return 0;
}