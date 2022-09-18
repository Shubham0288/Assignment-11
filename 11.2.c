// Write a function to calculate the HCM of the number.(TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{
    int n1,n2,hcf;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    hcf=HCF(n1,n2);
    printf("HCF is %d",hcf);
    return 0;
}
int HCF(int a, int b)
{
    int i;
    for(i=a>b?a:b ; i>=1 ; i--)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
    }
    return i;
}