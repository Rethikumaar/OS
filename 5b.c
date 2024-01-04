#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
void push(int a);
int pop();
int stack[20], top = -1;
void main()
{
    int op1, op2, i;
    char postfix[20], symb;
    float res;
    printf("enter the valid postfix exp\n");
    scanf("%s", postfix);
    for (i = 0; postfix[i] != '\0'; i++)
    {
        symb = postfix[i];
        if (isdigit(symb))
            push(symb - '0');
        switch (symb)
        {
        case '+':
            op2 = pop();
            op1 = pop();
            res = op1 + op2;
            push(res);
            break;

        case '-':
            op2 = pop();
            op1 = pop();
            res = op1 - op2;
            push(res);
            break;

        case '*':
            op2 = pop();
            op1 = pop();
            res = op1 * op2;
            push(res);
            break;

        case '/':
            op2 = pop();
            op1 = pop();
            if (op2 == 0)
                printf("error\n");
            res = op1 / op2;
            push(res);

            break;

        case '%':
            op2 = pop();
            op1 = pop();
            if (op2 == 0)
                printf("error\n");
            res = op1 % op2;
            push(res);

            break;
        case '^':
            op2 = pop();
            op1 = pop();
            res = pow(op1, op2);
            push(res);
            break;
        }
    }
    res = pop();
    printf("\n\nresult\t%f", res);
}
void push(int item)
{
    top = top + 1;
    stack[top] = item;
}
int pop()
{
    int item;
    item = stack[top];
    top = top - 1;
    return item;
}
int power(int op1, int op2)
{
    int result = 1;
    while (op2 != op1)
        ;
    {
        result *= op1;
        op2--;
    }
    return result;
}
