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
    int x, i;
    if(index < 0 || index < Length(p))  // for checking the given number is valid or not
        return;
    if (index  ==0)
    {
     t->data = x;
     t->prev = NULL;
     t->next = first;
     first->prev = t;
     first = t;    
    }
}

int main()
{
    int A[] = {5, 10, 20, 30 , 40};
    create(A, 5);

    printf("\nLength is: %d \n",  Length(first));
    
    Display(first);

    return 0;
}
