/*
Q5_b.Swap two numbers using bitwise operators.
   Use Bitwise Operations to Count the Number of Leading Zero’s in a Number x.
*/


#include<stdio.h>
#include<stdlib.h>

#define NUM_OF_BITS 8
#define MSB (1 << ( NUM_OF_BITS - 1 ))

int main() {

    int value;
    int count = 0;

    printf("Enter the number:\n");
    scanf("%d", &value);

    while(! ( value & MSB )) {
        count += 1;
        value <<= 1;
    }

    printf("The leading to zero in a number is: %d\n", count);

    return 0;
}