#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL; // to make both pointers NULL {[NULL/prev][data][NULL/next]}
    last = first;
    for(i=1; i<n; i++)
    {
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t; 
    }
}  

void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


int Length(struct Node *p)
{
    int len =0;
    while (p!=NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}  

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if(index < 0 || index > Length(p))  // for checking the given number is valid or not
        return;
    if (index  ==0)
    {
     t = (struct Node *)malloc(sizeof(struct Node));
     t->data = x;
     t->prev = NULL;
     t->next = first;
     first->prev = t;
     first = t;    
    }
    else
    {
        
        for(i=0; i<index-1; i++)
            p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        
        t->next = p->next;
        t->prev = p;
        if(p->next!=NULL)p->next->prev = t; // checks whether the Node is last or not, if it last it will 
        p->next = t; 						// use 3 pointers, otherwise 4;
    }
    
}

int main()
{
    int A[] = {5, 10, 20, 30 , 40};
    create(A, 5);

    printf("\nLength is: %d \n",  Length(first));
    
    
    Insert(first, 0, 99);
    
    Display(first);


    return 0;
}