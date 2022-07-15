/*
Q6.What is stack? What is Queue? 
   Make a program to demonstrate functionality of both concept using array.
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push();
void pop();
void peep();
void change();

int main() {
    
    
    int choice;

    while(1) {
        printf("\nEnter the choice.\n1.push\n2.pop\n3.peep\n4.change\n5.diplay\n6.exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;

        case 3: 
            peep();
            break;
        case 4:
            change();
            break;
        case 5:
            printf("Stack elements are:\n");
            for(int i = top; i >= 0;i--) {
                printf("%d ", stack[i]);
            }
            printf("\n");
            break;

        case 6:
            exit(0);
            break;
        
        default:
            printf("Invalid input!!! Please try again\n");
            break;
        }

    }

    return 0;
}

void push() {
    int val;
    
    if(top == SIZE- 1){
        printf("Stack is full\n");
    }
    else 
    {
        printf("Enter the number which you want to push.\n");
        scanf("%d", &val);

        top++;
        stack[top] = val;
        printf("Element %d is pushed in a stack\n", val);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack is empty");
    }
    else
    {
        printf("Deleted element is %d\n", stack[top]);
        top--;
    }
}

void peep() {
    int index, ans;
    printf("Enter the index to know value on that index:\n");
    scanf("%d", &index);

    if(top == -1) {
        printf("Stack is empty");
    }
    else 
    {
        ans = stack[top-index+1];
        printf("The value at the index is : %d\n", ans);
    }
}

void change() {
    int index, x;

    printf("Enter the index you want to change:\n");
    scanf("%d", &index);
    
    if(top == -1) {
        printf("Stack underflow\n");
    }
    else 
    {
        printf("Enter value of new element:\n");
        scanf("%d", &x);
        stack[top-index+1] = x;
        printf("Value has been sucessfully changed.\n");
    }
}
