// C program for implementation of selection sort
// Time Complexity : O(N^2)
// Space Complexity : O(1)
// Best, Avg, Worst Cases : All of them O(N^2)
// C program for implementation of selection sort  
#include<stdio.h>

// function to swap item using pointers
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void selectionSort(int array[], int size)  
{  
    int i, j, min_idx;  

    // Loop to iterate on array 
    for (i = 0; i < size-1; i++)  
    {  
        // Here we try to find the min element in array 
        min_idx = i;  
        for (j = i+1; j < size; j++)
        {
            if (array[j] < array[min_idx])  
                min_idx = j;  
        }
        // Here we interchange the min element with first one  
        swap(&array[min_idx], &array[i]);  
    }  
}  

/* Display function to print values */
void display(int array[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)
        printf("%d ",array[i]);

    printf("\n");  
}  

// The main function to drive other functions 
int main()  
{  
    int array[] = {72, 50, 10, 44, 8, 20};  
    int size = sizeof(array)/sizeof(array[0]);

    printf("Before sorting: \n");  
    display(array, size);

    selectionSort(array, size); 

    printf("\nAfter sorting: \n");  
    display(array, size); 

    return 0;  
}