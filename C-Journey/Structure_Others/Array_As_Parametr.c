
#include<stdio.h>

// swap(int *A, int y)
// {
//     int i;
//     for (i = 0; i < y; i++) {
//         printf("%d ", A[i]);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int A[5] = {5, 10, 15, 20, 25};
//     swap(A, 5);
    
//     return 0;
// }



#include<stdlib.h>
int *fun(int m)
{
    int *P;
    P = (int *)malloc(sizeof(int));
    return P;
}

int main(int argc, char const *argv[])
{
    int *A;
    A = fun(5);
    return 0;
}
