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

// #include<stdio.h>

// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main(int argc, char const *argv[])
// {
//     int a = 10;
//     int b = 5;

//     int c;

//     swap(& a, &b);

//     printf("%d\n,%d\n", a , b);

//     return 0;
// }


//         //           Call By Reference




                    // Strucutre as Parametr

// #include<stdio.h>

// struct Rectangle {

//     int length;
//     int breadth;
// };

// int area(struct Rectangle &r1 )
// {
//     r1.breadth++;
//     return r1.length * r1.breadth;
// }

// int main(int argc, char const *argv[])
// {
    
//     struct Rectangle r = {10, 5};

//     printf("%d", area(r));

//     return 0;
// }
