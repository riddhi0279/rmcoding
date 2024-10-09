#include <stdio.h>

void cube(int a)

{

    printf("cube of num is = %d ",a*a*a);
}


void main()
{
    int a ;                                                    
    printf("enter the value of a  = ");
    scanf("%d",&a);

    cube(a);
}
