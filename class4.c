#include <stdio.h>

int main(){

    int rowMatrix[] = {4, 5, 7, 8, 8};
    int newArray[5];
    // multidimensional array [row] [column]
    int matrix[3][2] = {{3,8}, {2,0},{5,2}};

    // printf("%i\n", rowMatrix[2]);

    // printf("%i\n", matrix[1][1]);


    for ( int i = 0; i<3; i++){
        for(int x = 0 ; x < 2 ; x++){
            printf("%i ", matrix[i][x]);
        }
        printf("\n");
    };

    // int x = 10;
    int *ptr = &x;
    
    return 0;

}