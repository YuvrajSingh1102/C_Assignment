/* Q3.what is linear search & binary search?
   Make a program of both using array. */

//Linear Search using array

#include<stdio.h>

int Linear_search(int [], int , int);

int main() {
    int size, element;
    printf("Enter the size of array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);

    }

    printf("Enter the element which you want to search:\n");
    scanf("%d", &element);

    int search_algorithm = Linear_search(arr, size, element);

    if(search_algorithm == -1) 
    {
        printf("The searched element was not in the array. Please try again\n");
    } 
    else 
    {
        printf("The search element is %d found at index %d\n", element, search_algorithm);
    }

    return 0;
}

int Linear_search(int arr[], int size, int element) 
{
    for(int i = 0; i < size; i++) 
    {
        if(arr[i] == element) 
        {
            return i;
        }
    }
    return -1;
}