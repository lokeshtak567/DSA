// cases :
// 1. deleting the first node   O(1)
// 2. deleting a node in between    O(n)
// 3. deleting the last node    O(n)
// 4. deleting first node with a given value    O(n)


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

struct Node * deletefirst(struct Node * head){
    struct Node *ptr =  head;
    head = ptr->Next;
    free(ptr);
    return head;
}

struct Node * deleteatindex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->Next;
    int i = 0;
    for(int i = 0; i < index-1; i++){
        p = p->Next;
        q = q->Next;
    }
    p->Next = q->Next;
    free(q);
    return head;
}

struct Node * deletelastelement(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->Next;
    while(q->Next!=NULL){
        p = p->Next;
        q = q->Next;
    }
    p->Next = q->Next;
    free(q);
    return head;
}

struct Node * deletebyvalue(struct Node * head, int value){
    struct Node * p = head;
    struct Node * q = head->Next;
    while(q->data!=value && q->Next!=NULL){
        p = p->Next;
        q = q->Next;
    }   
    if(q->data == value){
        p->Next = q->Next;
        free(q);
    }
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
    printf("\n");
    // head = deletefirst(head);  
    // head = deleteatindex(head,1);
    // head = deletelastelement(head);
    // head  = deletebyvalue(head,11);
    linkedlisttraversal(head);
    return 0;
}