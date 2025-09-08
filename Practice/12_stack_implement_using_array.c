// we are going to implement stack using arrays.

#include <stdio.h>
#include <stdlib.h>

// defining the stack ADT
struct stack{
    int size;
    int top;
    int * arr;
};

void displaystack(struct stack * ptr){
    printf("[");
    for(int i = ptr->top; i >= 0; i--){
        printf(" %d ", ptr->arr[i]);
    }
    printf("]\n");
}

// to check if the stack is empty O(1)
int isempty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;   
}


// to check if the stack is full O(1)
int isfull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}


// to implement push operation O(1)
int push(struct stack * ptr, int value){
    if(isfull(ptr)){
        printf("Stack Overflow\n");
        displaystack(ptr);
        return 0;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
        displaystack(ptr);
        return 1;
    }
}


// to implement pop operation  O(1)
int pop(struct stack * ptr){
    if(isempty(ptr)){
        printf("Stack Underflow\n");
        displaystack(ptr);
        return 0;
    }
    else{
        int value = ptr->arr[ptr->top]; 
        ptr->top--;
        displaystack(ptr);
        return value;
    }
}

// to implement peek operation O(1)

// we need top - (i-1)th element as i is starting from 1 not 0;
int peek(struct stack * ptr, int i){
    if(i < 1 || i > ptr->top+1){
        printf("Enter a valid Position\n");
        return 0;
    }
    int element = ptr->arr[(ptr->top)+1-i];
    printf("The Element at Position %d is : %d\n", i , element);
    return 1;
}

// to implement stacktop O(1)
int stacktop(struct stack * ptr){
    return ptr->arr[ptr->top];
}

// to implement stackbottom O(1)
int stackbottom(struct stack * ptr){
    return ptr->arr[0];
}



//main function     
int main(){

    // method 1
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));

    // method 2
    struct stack * s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 8;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));



    // checking if the stack is empty
    // printf("%d\n",isempty(s));

    // pushing an element manually
    // s->arr[0] = 55;
    // s->top++;

    // checking again if the stack is empty
    // printf("%d\n",isempty(s));


    push(s,55); // 8
    push(s,56); // 7
    push(s,57); // 6
    push(s,58); // 5
    push(s,59); // 4
    push(s,60); // 3
    push(s,61); // 2
    push(s,62); // 1
    push(s,63); //never pushed due to overflow

    for(int j = 1; j <= s->top+1; j++){
        peek(s,j);   
    }

    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);

    return 0;
}