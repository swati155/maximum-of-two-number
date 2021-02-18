#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter the value of num1:\n");
    scanf("%d",&num1);
    printf("enter the value of num2:\n");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("the maximum number is %d");
    }
    else
    {
        printf("this number is not maximum");
    }
    return 0;
}
