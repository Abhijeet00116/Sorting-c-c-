/*

Sorting is the process of arranging the data in some logical order.  
Bubble sort is an algorithm to sort various linear data structures.

The logical order can be ascending and descending in the case of numeric values
 or dictionary order in the case of alphanumeric values.

Bubble Sort is a very simple and easy to implement sorting technique.
In the bubble sort technique, each pair of element is compared.

Elements are swapped if they are not in order.
The worst-case complexity of bubble sort is O(n2).
*/
#include <stdio.h>

void swap(int *var1, int *var2) 
{ 
    int temp = *var1; 
    *var1 = *var2; 
    *var2 = temp; 
} 

// Here we are implementing bubbleSort
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++){
        // initializing swapped to 0 (no swaps happenned yet)
        int swapped = 0;

       // Since, after each iteration righmost i elements are sorted   
        for (j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]) 
            {
                swap(&arr[j], &arr[j+1]);
                // change swap value as swap has happenned
                swapped = 1;
            }
        }
        // if no swaps happen stop don't impliment further passes/iterations
        if(!swapped)
            break;
    }
} 

/* Function to print array */
void display(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

// Main function to run the program
int main() 
{ 
    int array[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(array)/sizeof(array[0]); 

    printf("Before bubble sort: \n");
    display(array, size); 

    bubbleSort(array, size);

    printf("After bubble sort: \n"); 
    display(array, size); 
    return 0; 
}