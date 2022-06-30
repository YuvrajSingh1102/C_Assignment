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
    int n = 10;
    
    for(int i = 0; i < 10; i++) {
        scanf("%[^\n]%*c", arr[i]);
    }
    Longest_string(arr, n);
    return 0;
}

void Longest_string(char arr[][256], int n) {
    int max, len, a;
    max = 0;
    
    for(int i = 0; i < n; i++) {
        len = strlen(arr[i]);
        if(len > max) {
            a = i;
            max = len;
        }
    }
    printf("The longest string among all the strings is: %s\n", arr[a]);
}