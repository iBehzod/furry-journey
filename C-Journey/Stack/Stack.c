// #include <stdio.h>

// struct Stack 
// {
//     int size;
//     int Top;
//     int *s;
// };

// int main() {
//     struct Stack st;
//     printf("Enter size of Stack: ");
//     scanf("%d", st.size);
// }

// void push ( Stack *st, int x )
// {
//     if ( st -> Top == size - 1 )
//     {
//         printf("Stack is overflow");
//     }
//     else
//     {
//         st -> top++;
//         st -> s[st -> top] = x;
//     }
    
// }

// int pop ( Stack *st) {
//     int x  = -1;
//     if ( st -> Top == -1 ) {
//         printf("Stacs is underflow");
//     }
//     else {
//         x = st -> s[st->top];
//         st -> top --;
//     }
//     return 0;
// }


// int peek (Stack st, int pos) {

// }





#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *S;

};

void Create(struct Stack *st)
{
    printf("Enter size of stack: ");
    scanf("%d", &st-> size);
    st -> top = -1;
    st -> S =(int *)malloc(st->size*sizeof(int));
    
    }

void Display(struct Stack st)

{
    int i;
    for(i =st.top; i >=0; i--)
        printf("%d ", st.S[i]);
    printf("\n");
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size -1)
        printf("Stack is overflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x; 
    }
    
}

int pop (struct Stack *st )
{
    int  x= -1;
    if (st->top == -1)
            printf("Stack is underflow");
    else
    {
        x = st->S[st->top--]; 
    }
    return x;
    
}

int main() {
    struct Stack st;
    
    Create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 40);
    push(&st, 50);
    push(&st, 60);
    push(&st, 70);

    printf("%d \n", pop(&st));

    Display(st);
    return 0;
}
