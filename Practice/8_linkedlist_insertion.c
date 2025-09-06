// linked list insertion code

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
    printf("\n");
}; 



struct Node * insertatfirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> Next= head;
    ptr -> data= data;
    return ptr;
}



struct Node * insertatindex(struct Node * head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i!=index-1){
        p = p-> Next;
        i++; 
    }
    ptr->data = data;       
    ptr->Next = p->Next;
    p->Next = ptr;
    return head;
}


struct Node * insertatend(struct Node * head, int data){
    struct Node *ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head;
    while(p->Next!=NULL){
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = NULL;
    return head;     
}

struct Node * insertafternode(struct Node * head, struct Node *prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->Next = prevNode ->Next;
    prevNode->Next = ptr;

    return head;


}

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
    // head = insertatfirst(head,99);
    // head = insertatindex(head,87,2);
    // head = insertatend(head,67);
    // head = insertafternode(head,second,22);
    linkedlisttraversal(head);
    return 0; 
}   