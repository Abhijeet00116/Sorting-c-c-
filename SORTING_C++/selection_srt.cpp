/*
Advantages
    It gives the same time complexity regardless of arrangements of items in the array or data set
    Since number of operations(swapping, size – 1) are less, so its favorable to use when swapping operations are costly in system
Disadvantages
    The time complexity is quiet high i.e. O(n2) thus not good

Best    Ω(n2)
Average Θ(n2)
Worst   O(n2)
*/


#include<bits/stdc++.h>
using namespace std;
//Display function to print values. 
void display(int array[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++)
        cout << array[i] << "\t";
        
    cout << "\n"; 
} 

//The main function to drive other functions. 
int main() 
{ 
    int array[] = {5, 3, 1, 9, 8, 2, 4, 7}; 
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Before sorting: \n"; 
    display(array, size);

    int i, j, min_idx,temp;
    
    //Loop to iterate elements of array. 
    for (i = 0; i < size-1; i++)  
    {  
        //Here we try to find the min element in array. 
        min_idx = i;  
        for (j = i+1; j < size; j++){
            if (array[j] < array[min_idx])  
                min_idx = j;  
        }
        
        // Here we interchange the min element with first one.              
        temp = array[min_idx];
        array[min_idx] = array[i]; 
        array[i] = temp;
    }
        
    cout << "After sorting: \n"; 
    display(array, size); //Using dispaly function to print sorted array.
    
    return 0;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
