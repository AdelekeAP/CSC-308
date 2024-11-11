#include <stdio.h>

int main(){
    int  age, salary;
    int experience;

    printf("Enter your age: ");
    scanf("%i", &age);

    printf("Enter your experience( 1 for experienced , 0 for not experienced ): ");
    scanf("%i", &experience);

    if(experience == 1){
        if( age >= 40){
            salary = 560000;
        } else if ( age >= 30 && age < 40){
            salary = 480000;
        }else if ( age < 28){
            salary = 300000;
        }else{
            salary = 100000;
        }
    }else {
        salary = 1000000;
    }

    printf("Your salary is :  %i \n", salary);

    return 0;
    
}