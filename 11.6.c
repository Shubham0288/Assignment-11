// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
int num(int ,int);
int main()
{
    int a,b;
    printf("Enter 2 number ");
    scanf("%d%d",&a,&b);
    printf("prime no is present between %d and %d : ",a,b);
    num(a,b);
    return 0;
}
int num(int a,int b)
{
    int c;
    for (int  i = a+1; i < b; i++)

    {
        c=0;
        for (int  j = 2;j<=i/2; ++j)
        {
        if (i%j==0)
        {
           c=1;
            break;
        }

      }
      if (c==0)
      {
        printf("%d\n",i);
      }

    }

}