#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct stack{
    int arr[MAX];
    int top;

};

// initialize the stack

void initialize(struct stack *s){
    s->top = -1;
}

//check stack is full or not

int isFull(struct stack *s){
    return s->top == MAX -1 ;
}

//check stack is empty or not
int isEmpty(struct stack *s){
    return s->top == -1;
}
//push operation
void push(struct stack *s ,int value){
    if(isFull(s)){
        printf("stack is overflow , cannot push  %d \n", value);
        return;
    }

    s->arr[++(s->top)] = value;
    printf("pushed calue %d\n", value);

}
//pop operation
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack is underflow");
        return -1;
    }
    return s->arr[s->top--];
}
//peek operation
int peek(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty");
        return -1;
    }
    return  s->arr[s->top];
}

//display
void display(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty");
        return ;

    }
    printf("stack to bottom \n");
    for(int i = s->top ; i >0 ; i--){
        printf("%d\n", s->arr[i]);
    }
    printf("\n");
}

int main(){
 struct stack s;
 initialize(&s);

 push(&s,10);
 push(&s,20);
 push(&s,40);
 push(&s,50);
 display(&s);
 
 printf("using pop operation\n");
 printf("pop operation %d",pop(&s));
 display(&s);
    return 0;
}

