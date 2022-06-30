/* 
Q3.what is linear search & binary search?
   Make a program of both using array. 
*/


#include<stdio.h>

void Linear_search(int [], int , int);
void Binary_search(int [], int , int);

int main() {
    int size, element, choice;
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

    printf("Enter the choice in which you want to perform the searching operation.\n1.Linear search\n2.Binary Search\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: 
        Linear_search(arr, size, element); 
        break;
    case 2:
        Binary_search(arr, size, element);
        break;
    default:
        printf("Wrong choice. Please try again");
        break;
    }

    return 0;
}

void Linear_search(int arr[], int size, int element) 
{
    int found;
    for(int i = 0; i < size; i++) 
    {
        if(arr[i] == element) 
        {
            found = i;
            printf("The search element is %d found at index %d\n", element, found);
        }
    }
    //printf("The searched element was not in the array. Please try again\n");
}

void Binary_search(int arr[], int size, int element) 
{
    int low = 0;
    int high = size - 1;
    int found;
    
    while(low <= high) {
        
        int mid = (low + high)/2;
        
        if(arr[mid] == element)
        {
            found = mid;
            printf("The search element is %d found at index %d\n", element, found);
            break;
        } 
        else
        {
            if(arr[mid]< element) 
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    //printf("The searched element was not in the array. Please try again\n");
}

