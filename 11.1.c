// Write a program to calculate the LCM of the number.
#include<stdio.h>
int LCM(int,int);
int main()
{
    int n1,n2,lcm;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    lcm=LCM(n1,n2);
    printf("LCM is %d",lcm);
    return 0;
}
int LCM(int num1,int num2)
{
    int i;
    for(i=1; i<=num1*num2; i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            break;
        }
    }
    return i;
}