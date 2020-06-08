#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if(t ==NULL)
        printf("stack is full\n");
    else{
    t->data = x;
    t->next = top;
    top =t;

    }
}   

char pop()
{
    int x =-1;
    struct Node *t;
    if (top == NULL)
        printf("Stack is empty\n");
    else
    {  
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
    
}


void Display()
{
    struct Node *p;
    p = top;
    while (p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{

//    printf("%d ", isBalanced(exp));
    
    
    push(10);
    push(10);
    push(30);push(20);

    pop();
    Display();


    return 0;
}
