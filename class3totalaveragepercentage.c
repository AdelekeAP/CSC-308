#include <stdio.h>

int main(){
float CSC201, CSC205, STA205, total, average, percentage;

    printf("Enter the marks obtained in CSC201:\n ");
    scanf("%f", &CSC201);
    
    printf("Enter the marks obtained in CSC205:\n ");
    scanf("%f", &CSC205);
    
    printf("Enter the marks obtained in STA205: \n");
    scanf("%f", &STA205);

    total = CSC201 + CSC205 + STA205;

    average = total / 3;

  
    percentage = (total / 300) * 100;

    
    printf("Total marks: %.2f \n", total);
    printf("Average marks: %.2f \n", average);
    printf("Percentage: %.2f \n", percentage);

    return 0;
};