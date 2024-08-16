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

    (a > b && a > c && a > d)
     ?printf("a is g"):

        (b > a && b > c && b > d)
        ?printf("b is g"):

              (c > a && c > b && c > d)
              ?printf("c is g")
   : printf("d is g");











































































































































































   
}