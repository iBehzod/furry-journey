#include<stdio.h>
#include<stdlib.h>


void swap(int *x, int *y)
{
    int temp=*x;
    *x = *y;
    *y=temp; 
}

void Bubble(int A[], int n)
{
    int i,j;
    int flag=0;

    for(i=0; i<n-1; i++)
    {
        flag =0;
        for(j=0; i<n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
                swap(&A[j], &A[j+1]);
                flag =1; 
        	}
        }
        if (flag==0)
            break;
    }
        
}

int main()
{
    int A[]= {5,3,2,2,9,11,31,29,86,10};
    Bubble(A, 10);
    int i;

    for(i=0; i<10; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}