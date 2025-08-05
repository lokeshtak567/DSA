#include <stdio.h>

void display(int *arr, int n)
    // code for traversal
{
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int indexinsertion(int *arr,int capacity,int size,int element,int index)
    // code for insertion
{
    if(size<capacity)
    {
        for(int i=size-1; i>=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index] = element;
        return 1;

    }
}



int main()
{
    int arr[100] = {54, 78, 32, 47,};
    int capacity = 100;
    int size = 4;
    int element = 67;
    int index = 1; 
    if (indexinsertion(arr, capacity, size, element, index)==1)
    {
        size+=1;
        display(arr, size);
    }

    return 0;
}