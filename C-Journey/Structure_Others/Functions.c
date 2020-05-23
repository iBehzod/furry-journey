#include<stdio.h>

int add (int a, int b)
{
    int c;
    c =a +b;
    return (c);
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    x = 10;
    y =5;
    
    z = add( x, y);
    printf("\n");
    printf("%d", z);

    return 0;
}
