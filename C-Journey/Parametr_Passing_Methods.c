// #include<stdio.h>

// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main(int argc, char const *argv[])
// {
//     int a = 10;
//     int b = 5;

//     int c;

//     swap(a, b);

//     printf("%d, %d", a , b);

//     return 0;
// }





//          Call by Address

#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;

    int c;

    swap(& a, &b);

    printf("%d\n, %d\n", a , b);

    return 0;
}