/*
Q2.write a function to multiply two metrices nxn and put result in a third matrix, 
what is order of runtime?*/

#include<stdio.h>
#define SIZE 3
void multiplication_matrices(int [3][3], int [3][3]);

int main() {

    int str1[SIZE][SIZE], str2[SIZE][SIZE];         //Order of metrices is [3x3]

    printf("Enter the elements of 1st metrices:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%d", &str1[i][j]);
        }
    }
    printf("Enter the elements of 2nd metrices:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%d", &str2[i][j]);
        }
    }
    multiplication_matrices(str1, str2);
    return 0;
}

void multiplication_matrices(int str1[SIZE][SIZE], int str2[SIZE][SIZE]) {
    int str3[SIZE][SIZE];
    int k = 0, sum = 0;
                                            //Time Complexity:-
    for(int i = 0; i < SIZE; i++) {        // (n-1-0) + 1 = n
        for(int j = 0; j < SIZE; j++) {     // (n-1-0) + 1 = n
            for(int k = 0; k < SIZE; k++) {     //(n-1-0) + 1 = n
                sum = sum + str1[i][k] * str2[k][j];        // n * n * n = n^3 = O(n^3)
            }
            str3[i][j] = sum;
            sum = 0;
        }
    }
    printf("Multiplication of two metrices are:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", str3[i][j]);
        }
        printf("\n");
    } 
}
