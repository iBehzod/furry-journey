#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if(t ==NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top =t;
    }
}   

char pop()
{
    char x =-1;
    struct Node *t;

    if (top == NULL)
        printf("Stack is empty\n");
    else
    {  
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
    
}


void Display()
{
    struct Node *p;
    p = top;
    while (p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalanced(char *exp)   // I am checking the whether square brackets are same or not in the given expesion
{
    int i;

    for(i=0; exp[i]!='\0'; i++)
        if(exp[i] == ')')   // if double quote its gonna be int : char, brilliant
            push(exp[i]);
        else if(exp[i] == '(')
            if(top==NULL)   //for checking whether the stack has the char or not
                return 0;
            pop();
    if (top ==NULL)
        return 1;
    else 
        return 0;
}

int presedences(char x)
{
    if (x == '+' || x == '-')
        return 1;    // it's their presedences, meaning that "privelege"
    if(x == '*' || x== '/' )
        return 2;
    return 0;
}

int isOperand(char x)  // if it is operand its go to the stack
{
    if (x == '+' || x == '-' || x == '*' || x== '/' )
        return 0; // it will not directly copy out operands into the prefix;
    else  
        return 1;
}

char *InToPost(char *infix)
{
    int i=0, j=0; 
    char *postfix;
    int len = strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(char));   /*creating array inside the heap; 
                                                    len +2 --> postfix size should be same as infix;
                                                    +2 for NULL */
    while(infix[i]!= '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++]; //the processof copying
        else
            {
                if(presedences(infix[i])> presedences(top->data)) // it could give error if nothind is inserted
                    push(infix[i++]);                               // so in the main we just push one element
                else    
                   postfix[j++] = pop();
            }       
    }
    while (top!=NULL)    
        postfix[j++] = pop(); //its last procedure
                              // when all operand and the symbols are in the postfix
                              // we are poping the operands which is stayed inside the stack and copy to postfix
    postfix[j] = '\0';        // in order to make last NULL char;
    return postfix;
}
int main()
{
    char *infix = "a+b*c/d*s+q";
//    char *exp = "(a+b)*(s*s)(aq)(qa)";
//    printf("%d ", isBalanced(exp));
//    char *postfix;
    
    push('#');

    char *postfix = InToPost(infix);
    printf("%s ", postfix); 
  
//    Display();


    return 0;
}
