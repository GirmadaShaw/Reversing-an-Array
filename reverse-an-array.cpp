#include <iostream>

int main()
{
    int arr[] = {34,56,78,23,12,34} ;
    int size = sizeof(arr)/sizeof(int) ; 

//Solution 1
//Time-Complexity: O(n) , Space-Complexity: O(n)

    int brr[size] ;
    for(int i=0 ; i<size ; i++)
    {
        brr[i] = arr[size-i-1] ;
        std::cout << brr[i] << " ";
    }

std::cout << std::endl; 

//Solution 2
//Time-Complexity: O(n) , Space-Complexity: O(1)
    int temp ; 

    for ( int i=0 ; i<size/2 ; i++ )
    {
        temp = arr[i] ; 
        arr[i] = arr[size-i-1] ;
        arr[size-i-1] = temp ; 
    }

    for ( int i=0 ; i<size; i++ )
        std::cout << arr[i] << " "; 


}