#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int front; //pointing address
    int rear; // but it's not a pointer
    int *array; // pointer to array to create;
};

void create(struct Queue *q,int size)
{
    q->size =size; //
    q->front=q->rear = 0;
    q->array = (int *)malloc(q->size*sizeof(int));

}

void enqueue(struct Queue *q, int x[])
{
    if ((q->rear+1)%q->size == q->front)
        printf("\nQueue is full\n");
    else
        q->rear = (q->rear+1)%q->size;
        q->array[q->rear] = x;   
}

int  dequeue(struct Queue *q)
{
    int x=-1;
    if (q->rear== q->front)
        printf("\nQueue is empty\n");
    else
        q->front= (q->front+1)%q->size;
        x = q->array[q->front];
    return x;
}

void Display(struct Queue q)
{
    int i=q.front+1;
    do {
        printf("%d ", q.array[i]);
        i = (i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
     
    printf("\n");
}
int main()

{
    struct Queue q;

    
    


    create(&q, 5);
    
    Display(q);
    return 0;
}
