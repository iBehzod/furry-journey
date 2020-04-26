#include<stdio.h>
#include <stdlib.h> // to reach heap memory AKA(malloc)
int main() {

    
    int *p;
    
    p = (int *)malloc(5*sizeof(int));
    printf("\n");
    printf("%d\n", *p);

    return 0;
}