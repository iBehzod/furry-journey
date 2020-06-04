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
    while (p)
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
    while (p)
    {
        return Rcount(p->next) + 1;
    }
    
    return 0;
}


int Sum(struct Node *p)
{
    int S = 0;
    while (p)
    {
        S = S + p->data;
        p = p->next;
    }
    return S;
}


int MAX(struct Node *p)
{
    int max = INT32_MIN;

    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next ;
    }

    return max;
    
}


struct Node* Search(struct Node *p, int key)
{
    struct Node *q;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;

    
}


void Insert(struct Node *p, int index, int val)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = val;
    int i;
    if(index < 0 || index > Rcount(p)) 
        return;
    
    if (index == 0)
    {
        t->next = first;
        first = t;
	}
    
    else 
    {
        for(i = 0; i < index-1; i++)
            p = p->next;
    }
    t->next = p->next;
    p->next = t;
    


}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;
    t  = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(first == NULL)
        first = t;
    else
    {
         while (p!=NULL && p->data < x)
         {
             q =p;
             p= p->next;
         }
         if (p == first)
         {
             t ->next = first;
             first = t;
         }
         else
         {
             t->next = q->next;
             q->next = t;
         }
         
         
    }
    
}

int  Delete (struct Node *p, int index)
{
    struct Node *q = 0;
    int x = -1;
    int i;

    if (index < 1 || index < Rcount(p))
        return x;
    if (index == 1)
    {
        x = first->data;
        q = first;
        first = first->next;
        free(q);
        return x;
    }   
    else
    {
        p = first;
        q = NULL;
        for (i = 0; i < index-1;i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = first->data;
        free(p);

        return x;
    }
    
}



int main()
{
    //int  A;
    int b;
  //  printf("Give me any number: \n");
  
    struct Node *temp;

//    int A[] = {5, 15, 20, 25, 30};
//      create(A, 5);

    
    
//    RecursiveDisplay(first);
    
//    printf("\nLenght of list %d \n", Rcount(first));
    
    printf("Max is %d ",MAX(first));
    
    printf("\nSum of all nodes is equal to %d \n\n", Sum(first));
    

    
//    Insert(first, 0, 11);
    
    SortedInsert(first, 23);
    SortedInsert(first, 2);
    SortedInsert(first, 13);

    temp = Search(first,13);
//	temp = Search(first,2);


	if (temp)
        printf("Key is found %d\n", temp->data);
    else
    {
        printf("key is not found\n");
    }

    Delete(first, 3);


	Display(first);
    printf("\n\n");
	
    // return 0;


}



