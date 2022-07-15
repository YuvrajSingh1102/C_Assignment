/*
Q1.Write a program to find and print the longest line for a fixed 
  input set of 10 lines having a max of 256 characters in a line.
*/

// C program without file handling.

#include <stdio.h>
#include <string.h>
#define ROW 10
#define COLUMN 256

void Longest_string(char[][256], int n);

int main()
{
    char arr[ROW][COLUMN];
    int n = ROW;
    
    
    for(int i = 0; i < ROW; i++) {
        scanf("%[^\n]%*c", arr[i]);
    }
    Longest_string(arr, n);
    return 0;
}

void Longest_string(char arr[][256], int n) {
    int max = 0, len, a, counter = 0;
    int temp[10];
    int line_num=0;
    
    for(int i = 0; i < n; i++) {
        len = strlen(arr[i]);
        if(len > max) {
            a =i;
            max = len;
            counter =1;
            line_num = 0; 
        }
        else if (len==max){
            temp[line_num]= i;
            line_num++;
            counter++;
        }
    }
    if(counter == 10) {
        printf("All the lines are same. Please enter new lines\n");
    }
    else if(counter==1){
        printf("Longest line is: %s\n",arr[a]);
    }
    else 
    {
        printf("%d lines are same length\n",counter);
        printf("\nThe same strings are:\n");
        printf("%s\n", arr[a]);
        //printf("The same size strings are:\n");
        for(int l=0;l<counter-1;l++){
        printf("%s\n",arr[temp[l]]);
        }
    }
}
