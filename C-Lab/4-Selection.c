#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Selection(int A[], int n)
{
    int i,j,k;

    for(i=0; i<n;i++)
    {
        for(j=k=i;j<n; j++)
            if(A[j] < A[k])
                k = j;
            swap(&A[k], &A[i]);
    }
}

int main()
{
    int A[]= {3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13}, n=16, i;
    Selection(A, n);
    for(i=0;i<n;i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}