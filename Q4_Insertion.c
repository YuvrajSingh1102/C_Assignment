/* 
Q4.Make a program to insert an element into array (at beginning, in between or at last)
   Make a program to delete an element from array (at beginning, in between or at last) 
*/

#include<stdio.h>
#include<stdlib.h>

void Insert_at_beginning(int [], int);
void Insert_at_position(int [], int);
void Insert_at_end(int [], int);
void display(int [], int);

int main () {

    int size, choice;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while(1){
        printf("\nEnter the number of operation which you want to perfom.\n1.Insert at beginning\n2.Insert at a position.\n3.Insert at the end\n4.Display\n5.Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            Insert_at_beginning(arr, size);
            break;
        case 2:
            Insert_at_position(arr, size);
            break;
        case 3:
            Insert_at_end(arr, size);
            break;
        case 4:
            display(arr, size);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid input!!\nPlease try again.\n");
            break;
        }
    }
    return 0;
}

void Insert_at_beginning(int arr[], int size) {
    int element;
    printf("Enter the element to insert at the beginning:\n");
    scanf("%d", &element);

    size++;
    printf("%ld",sizeof(size));
    for(int i = size; i > 0; i--) {
        arr[i - 1] = arr[i - 2];
    }
    arr[0] = element;

    printf("Modified array after insertion is:\n");
    /*for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");*/
    display(arr, size);
}

void Insert_at_position(int arr[], int size) {
    
    int position, element;

    printf("Enter the position that you want to insert:\n");
    scanf("%d", &position);

    printf("Enter the element to insert:\n");
    scanf("%d", &element);

    for(int i = size; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    size++;

    printf("Modified array after insertion is:\n");
    
    /*for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");*/
    display(arr, size);
}

void Insert_at_end(int arr[], int size) {
    
    int element;
    printf("Enter the element to insert at the end:\n");
    scanf("%d", &element);

    size++;
    arr[size - 1] = element;
    printf("Modified array after insertion is:\n");
    display(arr, size);
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}