//Write a function to check whether given number is prime or not.(TSRS)
#include<stdio.h>
int Prime(int);
int main()
{
    Prime(10);
    return 0;
}
int Prime(int n)
{
    int i,f=0;
    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            break;
        }
        else
        {
            f++;
        }
    }
    if(f==n-2)
    {
        
    }
    return 0;
}