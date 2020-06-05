#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}*Head=NULL;


void create(int A[], int e)
{
    int i;
    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;

    last = Head;
    for (i = 1; i<e;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next; // couldn't be NULL bcz it is circular
        last->next = t;
        last = t;
    }

}


void Display(struct Node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;

    } while (p!= Head);
    printf("\n");
}

int Length(struct Node *p)
{
    int len;
    do
    {
        len++;
        p = p->next;
    }while(p != Head);
    return len;
}


void Insert(struct Node *p, int index, int x)
{
    int i;
    struct Node *t;
    
    if(index < 0 || index > Length(p))
        return;
    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
    {
        while (p->next != Head)p = p->next;
        p->next  = t;
        t->next = Head;
        Head = t;
    }
    }
    else
    {
        for(i = 0; i<index-1;i++)p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        t->next = p->next;
        p->next = t;

    }
    
}


void DeleteC(struct Node *p, int pos)
{
    int i, x;
    struct Node *q;
    if (pos < 0 || pos >Length(p))
        return;
    if(pos == Head)
    {
        x = Head->data;

    }


}

int main() 
{
    int A[5] = {1, 2, 3, 4, 5};
    create(A,5);


    Insert(Head, 0, 100);
    Display(Head);
    return 0;
}