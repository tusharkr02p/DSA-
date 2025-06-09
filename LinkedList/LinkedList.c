#include <stdio.h>
#include <stdlib.h>



struct Node {
    int data;
    struct Node * next;

};
//traverse a Link

void traversalLinkedList(struct Node * ptr){
    while(ptr != NULL){
        printf("Element in %d \n", ptr->data);
        ptr = ptr->next;
    }
}
 int main (){
    struct Node * head ;
    struct Node * second ;
    struct Node * third ;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    //Link first and second node 
    head->data = 7;
    head->next = second;

    //Link first and second node 

    second->data = 11;
    second->next = third;
    //Link first and second node
    
    third->data = 66;
    third->next = NULL;

        traversalLinkedList(head);



    return 0;
 }
