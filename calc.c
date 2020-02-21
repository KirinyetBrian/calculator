#include <stdio.h>
#include "add.h"
#include "mult.h"
int main (a,b)
{

 char operation;
    printf("enter the operation you want to use e.g +*/-");
    scanf("%c",&operation);

    switch (operation)
    {
    case '*':
        multiplication(a,b);
        break;
    case '+':
        addition(a,b);
        break;
    default:
        printf("error");
        break;
    }
}
