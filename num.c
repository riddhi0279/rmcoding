#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("enter the value of a =");
    scanf("%d", &a);

    printf("enter the value of b =");
    scanf("%d", &b);

    printf("enter the value of c =");
    scanf("%d", &c);

    printf("enter the value of d =");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a is g");
            }
            else
            {
                printf(" d is g");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is g");
            }
            else
            {
                printf("d is g");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is g");
            }
            else
            {
                printf("d is g");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c id g");
            }
            else
            {
                printf("d is g");
            }
        }
    }
}