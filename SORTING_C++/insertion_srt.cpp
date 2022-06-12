/*
Rearranging data in a logical order is known as sorting 
i.e. arranging of data in ascending or descending order. 

In this article, we will learn about insertion sort in C++.

Insertion sorting is done in the same way as we sort our cards in while we play games of cards

C++ Program for Insertion Sort
Time Complexity : O(N^2)
Space Compelexity : O(1)
Best Case : When already Sorted, Worst Case : When reverse Sorted

*/
#include<iostream>
using namespace std;

//Function to print array.
void display(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
    cout << arr[i] << "\t"; 
    cout << "\n"; 
} 

//Main function to run the program.
int main() 
{ 
    int array[] = {5, 3, 1, 9, 8, 2, 4,7}; 
    int size = sizeof(array)/sizeof(array[0]); 

    cout << "Before Insertion sort: \n";
    display(array, size);

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
    cout << "After Insertion sort: \n"; 
    display(array, size);
    
    return 0; 
}