// stack implementation using linked list

/* Some Important Notes 

    1. side opposite to null of linked list will be for pop and push (ease) 
    2. head is now top
    3. stack is empty when top == NULL
    4. stack is full only when system (heap) memory is full else never 
    i.e malloc will give NULL pointer
    5. you can always set a custom size of ll stack

*/


#include <stdio.h>
#include <stdlib.h>


// to create a linked list strcuture
struct Node{
    int data;
    struct Node * Next;
};

// to create a stack structure
struct stack {
    struct Node *top; // pointer to the top most node
};



// to check if the stack is empty
int isempty(struct stack * ptr){
    if(ptr->top == NULL){
        return 1;  
    }
    else{
        return 0;
    }
}

// to check if the stack is full
int isfull(struct stack * ptr){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

// to implement push operation

// to implement pop operation

// to implement     




// to write main function code
int main(){

    struct stack * s = (struct stack *)malloc(sizeof(struct stack));
    




    return 0;
}

