/* 
Q4.Make a program to insert an element into array (at beginning, in between or at last)
   Make a program to delete an element from array (at beginning, in between or at last) 
*/

#include<stdio.h>
#include<stdlib.h>

void Delete_at_beginning(int [], int);
void Delete_at_position(int [], int);
void Delete_at_end(int [], int);
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
        printf("\nEnter the number of operation which you want to perfom.\n1.Delete at beginning\n2.Delete at a position.\n3.Delete at the end.\n4.Display\n5.Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            Delete_at_beginning(arr, size);
            break;
        case 2:
            Delete_at_position(arr, size);
            break;
        case 3:
            Delete_at_end(arr, size);
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

void Delete_at_beginning(int arr[], int size) {
   
    size--;
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    
    /* printf("Modified array after Deleting last element is:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
    display(arr, size);
    exit(0);
}

void Delete_at_position(int arr[], int size) {
    
    int position;

    printf("Enter the position that you want to delete:\n");
    scanf("%d", &position);

    if(position >= size + 1) {
        printf("Deletion is not possible\n");
    } 
    else{
        size--;
        for(int i = position; i <= size; i++) {
        arr[i - 1] = arr[i];
        }
    }
    //size--;
     /* printf("Modified array after deletion is:\n");
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); */
    display(arr, size);
    exit(0);
}

void Delete_at_end(int arr[], int size) {

    printf("Modified array after Deleting first element is:\n");

    for(int i = 0; i < size-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    exit(0);
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}