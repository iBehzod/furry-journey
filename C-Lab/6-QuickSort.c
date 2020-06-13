#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int selection(int A[], int l, int h)
{
    int pivot = A[l];
    int i=l, j=h;

    do
    {
        do{i++;}while(A[i]<= pivot);
        do{j--;}while(A[j]> pivot);

        if(i<j)swap(&A[i], &A[j]);
    }while(i<j);
    
    swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    int j;

    if(l < h)
        j = selection(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j+1, h);
}

int main()
{
    int A[]= {32, 3, 13, 5, 2, 1, 8, 7 ,10, 13, 100, 4},n=12, i;
    QuickSort(A, 0, n);

    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");

    return 0;
}