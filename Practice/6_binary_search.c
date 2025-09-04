// The array must be sorted for binary search.


#include <stdio.h>

int binarysearch(int arr[], int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    
    while(low<=high){
        
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }   
    return -1;    
}

int main(){
    int arr[]={23,24,33,45,57,67};
    int size=sizeof(arr)/sizeof(int);
    int searchindex= binarysearch(arr,size,57);
    if (searchindex != -1)
        printf("Element found at index %d\n", searchindex);
    else
        printf("Element not found\n");
    
    return 0;
}