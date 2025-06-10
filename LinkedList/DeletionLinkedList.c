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

// Delete the First Node
struct Node *DeleteTheFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// delete a Node  at a given index from the LinkedList
struct Node *DeleteAtGivenindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}


//delete at end
struct Node *DeleteAtEnd(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next!=NULL){
        p= p->next;
        q= q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    
}

//delete at the given value 
struct Node *DeleteAtGivenvalue(struct Node *head, int value){
    struct Node *p = head;
    struct Node *q = head -> next;

    while( q->data != value && q->next != NULL){
        p= p->next;
        q=q->next;
        }

        if(q->data ==value){
            p->next =q->next;
            free(q);

        }
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

    // LinkedList before delete first Node
    printf("Linked list before deletion \n");
    traverseLinkedList(head);

    printf("Linked List after deletion \n");
    // head = DeleteTheFirstNode(head);
    printf("\n");

    // LinkedList after delete FirstNode
    // head = DeleteTheFirstNode(head);
    // traverseLinkedList(head);
    // printf("\n");

    //linked list delete at given index
   //head = DeleteAtGivenindex(head,1);
   // head = DeleteAtEnd(head);
   head = DeleteAtGivenvalue(head,5);
    traverseLinkedList(head);

    return 0;
}