/*Q.2 Digit Counter
Develop a Program to count the total number of digits in a number.*/

#include<stdio.h>
int main()
{
   int num , count = 0 ; 
     
     printf(" enter number :");
     scanf("%d",&num);

     for(int i = 1 ; num!=0 ; i++)

    { 
        num = num/10;

         count++;    
    }
  
    printf("\n number of digits = %d  " , count);



}


