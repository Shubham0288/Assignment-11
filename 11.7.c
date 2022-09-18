//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
int fibinacci(int);
int main()
{
    int n,next=0,prev=0,current=1;
    printf("Enter a number ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
    int next=0,prev=0,current=1;
    for (int  i = 0; i <=n-1; i++)
    {
        next = prev + current;
        printf("%d\n",next);
        prev = current;
        current = next;
        
    }
return 0;
}