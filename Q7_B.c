/*
Q7.C program to create a file and store information.
   C Program to Find the Number of Lines in a Text File & Print on console.
*/

#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>

int main() {

FILE *fp;

int count = 1;
char ch;

fp = fopen("Strings.txt", "r");

if(fp == NULL) {
    printf("No file\n");
    exit(1);
}

while((ch=fgetc(fp)) != EOF) {
    if(ch == '\n'){
        count++;
    }
}

fclose(fp);
printf("The lines in the file are: %d\n", count);

    return 0;
}