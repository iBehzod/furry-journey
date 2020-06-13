#include<stdio.h>
void swap(int *x, int *y)
{
    int temp =*x;
    *x=*y;
    *y = temp;
}

void Selection(int B[], int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=k=i; j<n;j++)
        {
            if(B[j] < B[k])
                k = j;
        }
        swap(&B[k],&B[i]);

    }
}


int main()
{
    int B[]={31,2,4,6,1,71,65,24,12,32,56,7,122},n=13,i;

    Selection(B, n);

    for(i=0;i<n;i++)
        printf("%d ", B[i]);
    printf("\n");
    
    return 0;
}