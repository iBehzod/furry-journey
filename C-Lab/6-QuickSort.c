#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[], int l, int h)
{
    
}


int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    
    QuickSort(A,0,n);
    
    for(i=0;i<10;i++)
        printf("%d ",A[i]);
    printf("\n");

    return 0;
}
