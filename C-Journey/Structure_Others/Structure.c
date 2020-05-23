#include<stdio.h>
#include<stdlib.h>
struct Rectangle {

    int length; 
    int breadth;
    
};

int main() {
    
    struct Rectangle *p; //ointer takes same as it asseted
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> length = 10;
    p -> breadth = 15;

    printf("%d", p ->breadth);
    printf("%d", p -> length);
    
    return 0;


}