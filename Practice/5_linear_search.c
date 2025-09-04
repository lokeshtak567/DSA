// code for linear search in C

#include <stdio.h>

int linearsearch(int arr[], int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={33,45,23,45,57,67,24};
    int size=sizeof(arr)/sizeof(int);
    int searchindex= linearsearch(arr,size,57);
    if(linearsearch>=0){
        printf("Element Found at index %d", searchindex);
    }
    else{
        printf("Element not found !");
    }
    return 0;
}