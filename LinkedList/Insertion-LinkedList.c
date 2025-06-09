#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// traverse a linkedList
void traverseLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element in %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// insert at Beginninng

struct Node *insetAtBeginning(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// insert in between

struct Node *insertAtIndex(struct Node *head , int data ,int index){
    struct Node *ptr ;
    ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while( i!= index -1){
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}

// insert at end

struct Node*insertatEnd(struct Node*head , int data ){
    struct Node *ptr;
    ptr= (struct Node *) malloc (sizeof(struct Node));
    struct Node *p =  head;
    while( p -> next != NULL){
        p = p->next;
    }
    ptr ->data = data;
    p->next = ptr ;
    ptr ->next  = NULL;
    return head;
}

// insert after Node

struct Node * insertafterNode(struct Node * head , struct Node *prevNode, int data){
    struct Node *ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node *p = head;
     ptr -> next=prevNode -> next ;
    
    prevNode -> next =ptr;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // linked first to second
    head->data = 7;
    head->next = second;

    // linked second to third

    second->data = 5;
    second->next = third;

    // Terminate the Linked

    third->data = 44;
    third->next = NULL;

    // traverseLinkedList(head);
    head =  insetAtBeginning(head,55);
    traverseLinkedList(head);
    printf("\n");
    head = insertAtIndex( head,4, 2);
    traverseLinkedList(head);

    return 0;
}