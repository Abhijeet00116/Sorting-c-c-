/*
Insertion sort is just like how to sort playing cards in your hands. 
You pick one card and try to place that card in its correct position.

The array is kind of split into a sorted part and an unsorted part. 
A value from the unsorted part is picked and placed into its correct position in the sorted part

Time Complexity : O(n^2) 
Auxiliary Space : O(1)
*/
#include<stdio.h>

// Here we are implementing Insertion sort
void insertionSort(int array[], int size) 
{ 
    int i, key, j;  
    for (i = 1; i < size; i++) 
    { 
        key = array[i]; 
        j = i - 1; 
        /* Here the elements in b/w arrary[i-1 & 0] 
        which are greater than key are moved ahead 
        by 1 position each*/ 
        while (j >= 0 && array[j] > key) 
        {  
            array[j + 1] = array[j];  
            j = j - 1;  // moving backwards
        }
        // placing key item now
        array[j + 1] = key;  
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
    int array[] = {5, 3, 1, 9, 8, 2, 4, 7}; 
    int size = sizeof(array)/sizeof(array[0]); 

    printf("Before Insertion sort: \n");
    display(array, size); 

    insertionSort(array, size);

    printf("After Insertion sort: \n"); 
    display(array, size); 
    return 0; 
}
