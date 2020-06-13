// 3. Write a program to sort the given array using Bubble Sort. 
#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i,j;
    int flag= 0;
    for(i=0; i<n-1;i++)
    {
        flag = 0;
        for(j=0; j<n-i-1;j++)
            if(A[j] > A[j+1])
                swap(&A[j], &A[j+1]);
                flag =1;
        if(flag ==0) return;
    }      
}

int main()
{
    int A[]= {3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,3, 4, 5, 7, 1, 3, 10, 13, 14, 19, 5 , 4 ,3 ,2,1, 13, 100,2, 2, 101, 5,}, n=21*10, i;
    Bubble(A, n);
    for(i=0;i<n;i++)
        printf("%d ", A[i]);
    printf("\n");

    // A B C D E  F 
    // 5 7 5 9 10 6

    // A C F B D E
    // 5 5 6 7 9 10
    return 0;
}