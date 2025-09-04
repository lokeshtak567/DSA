// linked list creation

#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *Next;
    
};

void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ", ptr -> data);
        ptr=ptr->Next;
    }
};


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for nodes in linked list in heap     
    head = (struct Node *)malloc(sizeof(struct Node));  
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes of linked list   
    head -> data = 7;
    head -> Next = second;

    // link second and third nodes of linked list   
    second -> data = 9;
    second -> Next = third;

    // link third fourth nodes of linked list   
    third -> data = 11;
    third -> Next = fourth;

    // Terminate the linked list at fourth node   
    fourth -> data = 15;
    fourth -> Next = NULL;

    linkedlisttraversal(head);  

    return 0;
}