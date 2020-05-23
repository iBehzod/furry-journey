#include <stdio.h>

struct Rectangle 
{
    int length;
    int breadth;
};

void ChangeLength ( struct Rectangle *p, int l )
{
    p -> length = l;
}

int main() 
{
    struct Rectangle r = {10, 5};

    ChangeLength( &r, 20);

    printf("%d", &r);
    
    return 0;
}