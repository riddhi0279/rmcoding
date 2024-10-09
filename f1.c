#include<stdio.h>


void div(int num )
{
    if(num%3==0  && num%5==0)
    {
        printf("num is divisible by 3 & 5");
    }
    else
    {
        printf("num is not divisible by 3 & 5");
    }
}


void main()
{

    int num ;

    printf("enter the value of num = ");
    scanf("%d",&num);
    div(num);


}