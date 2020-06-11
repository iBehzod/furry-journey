#include<stdio.h>

void Merge(int A[], int l, int mid, int h)
{
    int i,j,k;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for(;i<=mid;i++)
        B[k++] = A[i];
    for(;i<=h;i++)
        B[k++] = A[j];

    for(int i=1; i<=h; i++)
        A[i] = B[i];
}


void IMergeSort(int A[], int n)
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