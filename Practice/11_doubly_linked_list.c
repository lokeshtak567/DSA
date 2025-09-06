#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *Prev;
    int data;
    struct Node *Next;
};

void forwardtraversal(struct Node *ptr){
    do{
        printf("%d ", ptr -> data);
        ptr=ptr->Next;
    }while(ptr!=NULL);
}

void backwardtraversal(struct Node *ptr){
    do{
        printf("%d ", ptr -> data);
        ptr=ptr->Prev;
    }while(ptr!=NULL);
}

int main(){

    // creating Nodes
    struct Node *N1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N6 = (struct Node *)malloc(sizeof(struct Node));

    // linking Nodes

    N1->Prev = NULL;
    N1->data = 1;
    N1->Next = N2;

    N2->Prev = N1;
    N2->data = 3;
    N2->Next = N3;
    
    N3->Prev = N2;
    N3->data = 5;
    N3->Next = N4;

    N4->Prev = N3;
    N4->data = 7;
    N4->Next = N5;
    
    N5->Prev = N4;
    N5->data = 9;
    N5->Next = N6;

    N6->Prev = N5;
    N6->data = 11;
    N6->Next = NULL;

    forwardtraversal(N1);
    printf("\n");
    backwardtraversal(N6);
    return 0;
}