/*
Q8.C program to copy from one file to another file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>

int main() {

    int fd1, fd2;

    char reading[1000];

    fd1 = open("Strings.txt", O_RDWR | O_CREAT, 0777);
    fd2 = open("String2.txt", O_RDWR | O_CREAT, 0777);

    int len = read(fd1, reading, sizeof(reading));
    write(fd2, reading, len);

    close(fd1);
    close(fd2);

    return 0;
}