#include <stdio.h>
#include <stdlib.h>

struct MyArray  
{
    int total_size;
    int used_size;
    int *ptr;
};


void CreateArray(struct MyArray * a, int tSize, int uSize) //takes a structure pointer as parameter
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize*sizeof(int));
}

void setval(struct MyArray * a)  //takes a structure pointer as parameter
{
    for(int i=0; i < a->used_size; i++)
    {
        printf("Enter :");
        scanf("%d", &((a->ptr)[i]));
    }
}

void show(struct MyArray * a)  //takes a structure pointer as parameter
{
    for(int i=0; i < a->used_size; i++)
    {
        printf("%d ", (a->ptr)[i] );
    }
}



int main()
{
    struct MyArray marks; // created a custom structure marks of type MyArray
    CreateArray(&marks,10,2); // used a fuction to create a array, given address of marks structure, tsize, usize
    setval(&marks); // used a funtion to set values to the array pointer.
    show(&marks);  // used to display the array elements.
    return 0;
}