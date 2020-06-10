#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *lchild; //left
    struct Node *rchild; //right child 
    int data;
}*root=NULL;

void insertion(int key) //we search and insert in this function; no need to create "create" function;
{
    struct Node *t=NULL;
    struct Node *p,*q=NULL; // one to search the element, another to catch up and insert the element;

    if(root==NULL)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root=p;
        return; //break;
    }
    while (t!=NULL)
    {
        q=t;
        if(key<t->data)
            t = t->lchild;
        else if(key> t->data)
            t = t->rchild;
        else
            return;
    }
    
    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    

    if(key<q->data)q->lchild =p; // last we pointing/assigning the created node to the tree;
    else q->rchild =p;
}

void Inorder(struct Node *p)
{
    if(p)
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
}

struct Node *search(struct Node *t,int key)
{
    while(t!=NULL)
    {
    if(key == t->data)
        return t;
    else if(key<t->data)
        t =t->lchild;
    else
        t=t->rchild;
    }
    return NULL;
}

int main()
{ 
    struct Node *temp;
    insertion(40);
    insertion(30);
    insertion(10);
    insertion(20);
   

    Inorder(root);
    printf("\n");

    temp=search(root,20);
    if(temp!=NULL)
        printf("element is found %d", temp->data);
    else
        printf("elements is notfound");
    return 0;
}