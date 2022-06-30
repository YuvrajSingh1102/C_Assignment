/*
Q9.Write a C program which prints itself.
*/

#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>

int main() {

    int fp;
    char buffer[1000];

    fp = open("demo.c", O_CREAT | O_RDWR, 0777);

    int len = read(fp, buffer, sizeof(buffer));

    //write(fp, buffer, len);

    printf("%s\n", buffer);

    return 0;
}