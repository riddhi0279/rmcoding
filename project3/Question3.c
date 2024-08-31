/*Q.3 Digit Addition
Develop a Program to find the sum of a number's first and last digits.*/

#include<stdio.h>
int main()
{
    int num , last , first ;

    printf("enter the number = ");
    scanf("%d",&num);

    last = num%10;

    for(int i = 1 ; num!=0 ; i++ )
    {
      
        first = num ; 
        num  = num/10;

       
    }

  
    printf("\n first =  %d , last = %d    " , first, last );
    printf("\nsum of first and last digit = %d  " ,  first + last );
}