#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{

    int i,j,flag=0;

    for(i=0; i<n-1; i++)
    {
    int i,j;
    int flag =0;
    for(i=0; i<n-1;i++)
    {
        flag =0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j] > A[j+1])
                swap(&A[j], &A[j+1]);
               flag =1;
        }
        if (flag==0) return;
    }
    }
}




int main()
{
    int A[]= {5,3,2,2,9,11,31,19,39,1},n=10,i;
    
    Bubble(A, n);
    
    for(i=0; i<10; i++)
        printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}
//          //          //          //

//          //          //          // 

//          //          //          //
// #include <stdio.h>
// #include<stdlib.h>
// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// void Bubble(int A[],int n)
// {
//     int i,j,flag=0;
    
//     for(i=0;i<n-1;i++)
//     {
//         flag=0;
//         for(j=0;j<n-i-1;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 swap(&A[j],&A[j+1]);
//                 flag=1;
//             }
//         }
//         if(flag==0)
//             break;
//     }
    
// }
// int main()
// {
//    int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    
//     Bubble(A,n);
    
//     for(i=0;i<10;i++)
//         printf("%d ",A[i]);
//     printf("\n");
    
//     return 0;
// }


// 1 + 2+ 3+ 4 +5+ ... (n-1) = (n*(n-1))/2 = O(n**2)
// int main()
// {
//     int A[]={5,2,32,23,232,13,23,23,21,2,1,1,3,2,4,5,7,90},n=416*8*4,i;
//     Bubble(A, n);

//     for(i=0; i<n; i++)
//         printf("%d ", A[i]);
//     printf("\n");

// }
