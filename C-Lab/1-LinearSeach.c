// Write a program to search an element using Linear Search.  
#include<stdio.h>

int main()
{
    int m,n,search;
    int A[100];

    printf("Enter the amount of elements: ");
    scanf("%d", &m);

    printf("Enter %d integers: \n", m);

    for(n=0;n<m;n++)
        scanf("%d", &A[n]);

    printf("Enter the integer to search: ");
    scanf("%d", &search);

    for(n=0;n<m;n++)
    {   
        if( A[n] == search)
            break;
    }
    if(n<m)
        printf("#Elementfound at index %d", n+1);
    else   
        printf("Sorry, Try again");
    

    return 0;
}
