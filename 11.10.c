//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
//function.
#include <stdio.h>
int fact(int);
void main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("the sum of factorial is %d: ",sum);
}
int fact(int n)
{
    int num = 0, fact = 1;
   while (num<=n-1)
   {
        fact=fact+fact*num;
        num++;

   }
   return fact;
    
}