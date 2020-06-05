#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
struct Node
{
    int data;
    struct Node *next;
}*first = NULL, *second=NULL, *third=NULL;

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

void create2(int B[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = NULL;
    last = second;

    for(i=1; i<n; i++)
    {
        t =(struct Node *)malloc(sizeof(struct Node));
        t->data=B[i];
        t->next= 0;
        last->next = t;
        last = t;
        
    }   

}

//
//void create3(int A[], int n)
//{
//    int i;
//    struct Node *t, *last;
//    third = (struct Node *)malloc(sizeof(struct Node));
//    third->data = A[0];
//    third->next = NULL;
//    last = third;
//
//    for(i=1; i<n; i++)
//    {
//        t =(struct Node *)malloc(sizeof(struct Node));
//        t->data=A[i];
//        t->next= 0;
//        last->next = t;
//        last = t;
//        
//    }   
//
//}







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
 
void ReverseViaPointer(struct Node *p)
{
    struct Node *q=NULL, *r=NULL;
    while (p!=NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first =q;
    
}



void Concat(struct  Node *p, struct Node *q)
{
	third = p;
	
	while(p->next)
		p = p->next;
	p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
	struct Node *last;
	
	if(p->data < q->data)
	{
		third = last = p;
		p= p->next;
		third->next = NULL;
	}
	else
	{
		third = last = q;
		q= q->next;
		third->next = NULL;
	}
	while (p!=NULL && q!=NULL)
	{
		if (p->data < q->data)
		{
			last->next = p;
			last= p;
			p=p->next;
			last->next = NULL;
		}
		else
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}
	
	if(p)last->next = p;
	if(q)last->next =q;
}


int isLoop(struct Node *p)
{
    struct Node *q, *m;
    q = m = p;

    do
    {
        q = q->next;
        m = m->next;
        m = m? m->next:m;
    } while (q && m && q!=m);
    if(p==q)
        return 1;
    else
    	return 0;
    

}


int main()
{
    //int  A;
    int b;
  //  printf("Give me any number: \n");
  
    struct Node *temp;

    int A[] = {5, 15, 20, 25, 30};
    int B[] = {110, 117, 130 , 128};
    create(A, 5);
    create2(B, 4);

    
    
//    RecursiveDisplay(first);
    
//    printf("\nLenght of list %d \n", Rcount(first));
    
    printf("Max is %d ",MAX(first));
    
    printf("\nSum of all nodes is equal to %d \n\n", Sum(first));
    

    
//    Insert(first, 0, 11);
    
//  SortedInsert(first, 5);
//  SortedInsert(first, 10);
//  SortedInsert(first, 15);
//	SortedInsert(first, 20);
//	SortedInsert(first, 25);
//	SortedInsert(first, 30);
//	
    temp = Search(first, 88);
    
	if (temp)
        printf("Key is found %d\n", temp->data);
    else
    {
        printf("key is not found\n");
    }


//    Delete(first, 3);


//    ReverseViaPointer(first);
//	printf("\nFirst\n\n");
//	Display(first);
//    printf("\n\n");
//    
//    printf("Second\n\n");
//	Display(second);
//    printf("\n\n");
//
//        
//	Merge(first, second);
	
	//Concat(first, second);	

		
		
//	printf("Third\n\n");
//	Display(third);
//    printf("\n\n");

    printf("\n%d\n " , isLoop(first));


    return 0;


}



