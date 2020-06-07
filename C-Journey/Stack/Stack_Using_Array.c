#include<stdio.h>
#include<stdlib.h>


struct Stack
{
    int size;
    int top;
    int *array; //pointer to create a stack;
};


void create(struct Stack *p)
{
    printf("Enter a size of stack: ");
    scanf("%d", &p->size);
    p->top = -1;
    p->array =(int *)malloc(p->size*sizeof(int));
}

void Display(struct Stack p)
{
    int i;
    for(i=p.top; i>=0; i--)    
        printf("%d ", p.array[i]);
    printf("\n");
}

void push(struct Stack *p, int x)
{
    if(p->top == p->size-1)
        printf("Stack is overflow");
    else
    {
        p->top++;
        p->array[p->top] = x;
    }
}

int pop(struct Stack *p)
{
    int x;
    if(p->top == -1)
        printf("Stack is underflow");
    else
    {
        x = p->array[p->top--];
    }
    return x;
}

int peek(struct Stack p, int pos)
{
    int x=-1;
    if(p.top -pos +1 < 0)
        printf("Invalid index\n");
    x = p.array[p.top-pos+1];
    return x;
}

int main()
{
    struct Stack p;    
    create(&p);
    push(&p, 10);
    push(&p, 20);
    push(&p, 30);
    push(&p, 40);
    

    printf("%d \n", peek(p, 5));
    Display(p);
    return 0;
}