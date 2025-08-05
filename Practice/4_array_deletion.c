#include <stdio.h>



void display(int *arr, int n)
    // code for traversal
{
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indexdeletion(int *arr, int size, int index)
{
    for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}



int main()
{
    int arr[100] = {54, 78, 32, 47,};
    int capacity = 100;
    int size = 4;
    int index = 1; 
    display(arr,size);
    if (indexdeletion(arr, size, index)==1)
    {
        size-=1;
        display(arr, size);
    }

    return 0;
}