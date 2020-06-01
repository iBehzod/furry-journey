#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++)
    {
        t =(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next= 0;
        last->next = t;
        last = t;
        
    }   
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
}


void RecursiveDisplay(struct Node *p)
{
    if (p!=NULL)
    {
        RecursiveDisplay(p->next); 
        printf("%d ", p->data);
        
    }
}


int Rcount(struct Node *p)
{
    while (p!= NULL)
    {
        return Rcount(p->next) + 1;
    }
    
    return 0;
}


int Sum(struct Node *p)
{
    int S = 0;
    while (p != NULL)
    {
        S = S + p->data;
        p = p->next;
    }
    return S;
}


int MAX(struct Node *p)
{
    int max = INT32_MIN;

    while (p!=NULL)
    {
        if (p->data > max)
            max = p->data;
        p = p->next ;
    }

    return max;
    
}


int Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;

        p = p->next;
    }
    return NULL;

    
}

int main()
{
    //int  A;
    int b;
  //  printf("Give me any number: \n");
  
    Search(first, 23);

    int A[] = {5, 10, 2, 23, 13};
    create(A, 5);
//    Display(first);
    RecursiveDisplay(first);
    printf("\nLenght of list %d \n", Rcount(first));
    // printf("sdasdasd");
    printf("Max is %d ",MAX(first));
    printf("Sum of all nodes is equal to %d \n\n", Sum(first));
    return 0;
}



