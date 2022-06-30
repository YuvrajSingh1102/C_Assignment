#include<stdio.h>

int main() {
    int a;
    char b;
    float c;
    double d;

    int *p;
    p = &a;
    printf("The address of a is : %d", p);

    printf("The byte allocated by variables are: %d %d %d %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    system("cat data.c");
    return 0;
}