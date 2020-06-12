// Write a program to search an element using Linear Search.  
#include<stdio.h>

int main()
{
    int i,j,search, A[50];
    printf("Enter how many its going to be: \n");
    scanf("%d", &i);

    printf("Enter %d integer(s): \n", i);
    for(j=0;j<i;j++)
        scanf("%d", &A[j]);

    printf("Enter the element to search: \n");
    scanf("%d", &search);

    for(j=0;j<i;j++)
    {
        if(A[j]==search)
            break;
}
    if(j<i)
        printf("Element is found at index %d and your number is  %d", j+1, search);
    else    
        printf("Element is not found, please try again");

    return 0;

}
