/*
BUBBLE SORT in C++, is one of the popular sorting techniques, that we use in data structures. 
The logical arranging of data is known as sorting.  
Using the algorithm of bubble sort we can sort any linear data structure.

The logical sorting order can be ascending or descending.
This is a simple sorting algorithm but it is not the best. 
*/
#include <iostream>
using namespace std;

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

// Here we will implement bubbleSort.
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
   {
        // for optimization when array is already sorted & no swapping happens
       bool swapped = false;
       
       //Since, after each iteration rightmost i elements are sorted.
       for (j = 0; j < n-i-1; j++) 
       { 
           if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                // swapping happenned so change to true
                swapped = true;
           }
       }
       // if no swaps happenned in any of the iteration
       // array has become sorted so stop with the passes
       if(swapped == false)
            break;
   }
}

// Function to print array.
void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

//Main function to run the program.
int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before bubble sort: \n";
    display(array, size);//Calling display function to print unsorted array.
    
    bubbleSort(array, size);
    
    cout<<"After bubble sort: \n";
    display(array, size);//Calling display function to print sorted array.
    
    return 0;
}