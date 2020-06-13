#include<stdio.h>

void Insertion(int A[], int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j = i-1;
        x = A[i];
        while (j>-1 && A[j] > x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
        
    }
}

int main()
{
    int A[]= {3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13}, n=16, i;
    Insertion(A, n);
    for(i=0;i<n;i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}