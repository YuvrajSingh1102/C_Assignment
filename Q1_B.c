/*
Q1.Write a program to find and print the longest line for a fixed 
  input set of 10 lines having a max of 256 characters in a line.*/

// C program with file handling

#include<stdio.h>
#include<string.h>

int main() {

    FILE * fp;
    //FILE * fp1;

    char string1[256];
    char longest[256];
    int length = 0;
    //char string2[256];

    fp = fopen("Strings.txt", "r");
    //fp1 = fopen("String2.txt", "w");

    if(fp != NULL) {
        while(!feof(fp))
        {
            fgets(string1, 256, fp);
            //fputs(string1, fp1);

            if(length < strlen(string1)){
                strcpy(longest, string1);
                length = strlen(string1);
            }
        }
        printf("Longest string among all strings is: %s", longest);
        fclose(fp);
    }
    else
    {
        printf("File could not open");
    }
return 0;
}
